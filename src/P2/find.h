#pragma once
#include <basic.h>
#include <lo.h>
#include <alo.h>
#include <so.h>
#include <ms.h>
#include <po.h>
#include <step.h>
#include <jt.h>
#include <stepguard.h>
#include <smartguard.cpp>
#include <gomer.h>
#include <ub.h>
#include <mb.h>
#include <murray.h>
#include <puffer.h>
#include <crusher.h>
#include <tank.h>
#include <jp.h>
#include <hg.h>
#include <mecha.h>
#include <rog.h>
#include <turret.h>
#include <pzo.h>
#include <mouthgame.h>
#include <suv.h>
#include <cycle.h>
#include <lgn.h>
#include <jack.h>
#include <rip.h>
#include <water.h>
#include <break.h>
#include <alarm.h>
#include <can.h>
#include <dartgun.h>
#include <button.h>
#include <jlo.h>
#include <squish.h>
#include <bone.h>
#include <barrier.h>
#include <ik.h>
#include <zap.h>
#include <cnvo.h>
#include <hide.h>
#include <bomb.h>
#include <missile.h>
#include <fly.h>
#include <rat.h>
#include <dart.h>
#include <dsp.h>
#include <mrkv.h>
#include <blip.h>
#include <xform.h>
#include <light.h>
#include <chkpnt.h>
#include <proxy.h>
#include <sky.h>
#include <coin.h>
#include <tail.h>
#include <flash.h>
#include <dysh.h>
#include <waypoint.h>
#include <tn.h>
#include <dialog.h>
#include <speaker.h>
#include <rope.h>
#include <wm.h>
#include <sw.h>
#include <cm.h>
#include <shape.h>
#include <pipe.h>
#include <rail.h>
#include <landing.h>
#include <target.h>
#include <hnd.h>
#include <pnt.h>
#include <jump.h>
#include <spire.h>
#include <actseg.h>
#include <aseg.h>
#include <map2d.h>
#include <vis.h>
#include <frzg.h>
#include <sm.h>
#include <path.h>
#include <rchm.h>
#include <rwm.h>
#include <wr.h>
#include <keyhole.h>
#include <jsg.h>
#include <asega.h>

extern VT *g_mpcidpvt[161]{g_vtbasic.pvtSuper, g_vtlo.pvtSuper, g_vtalo.pvtSuper, g_vtso.pvtSuper, g_vtms.pvtSuper, g_vtpo.pvtSuper, g_vtstep.pvtSuper, g_vtjt.pvtSuper, 
g_vtstepguard.pvtSuper, g_vtsmartguard.pvtSuper, g_vtgomer.pvtSuper, g_vtubg.pvtSuper, g_vtmbg.pvtSuper, g_vtbhg.pvtSuper, g_vtmurray.pvtSuper, g_vtpuffc.pvtSuper, g_vtcrfod.pvtSuper,
g_vtcrfodb.pvtSuper, g_vtcrfodk.pvtSuper, g_vttank.pvtSuper, g_vtjp.pvtSuper, g_vthg.pvtSuper, g_vtmecha.pvtSuper, g_vtrov.pvtSuper, g_vtturret.pvtSuper, g_vtvault.pvtSuper,
g_vtpuffer.pvtSuper, g_vtmgv.pvtSuper, g_vtsuv.pvtSuper, g_vtcycle.pvtSuper, g_vtlgn.pvtSuper, g_vtjack.pvtSuper, g_vtripg.pvtSuper, g_vtwater.pvtSuper, g_vtbrk.pvtSuper, g_vtbreak.pvtSuper,
g_vtalbrk.pvtSuper, g_vtcan.pvtSuper, g_vtdartgun.pvtSuper, g_vtswp.pvtSuper, g_vtfragile.pvtSuper, g_vtzapbreak.pvtSuper, g_vtbrkp.pvtSuper, g_vtbutton.pvtSuper, g_vtvolbtn.pvtSuper, 
g_vtjlovol.pvtSuper, g_vtsquish.pvtSuper, g_vtbone.pvtSuper, g_vtsprize.pvtSuper, g_vtscprize.pvtSuper, g_vtlifetkn.pvtSuper, g_vtclue.pvtSuper, g_vtalarm.pvtSuper, g_vtsensor.pvtSuper, 
g_vtlasen.pvtSuper, g_vtcamsen.pvtSuper, g_vtprsen.pvtSuper, g_vtbarrier.pvtSuper, g_vtikh.pvtSuper, g_vttzp.pvtSuper, g_vtvolzp.pvtSuper, g_vtcnvo.pvtSuper, g_vthbsk.pvtSuper, g_vtbomb.pvtSuper,
g_vtmissile.pvtSuper, g_vtaccmiss.pvtSuper, g_vttarmiss.pvtSuper, g_vtsplmiss.pvtSuper, g_vtgroundmiss.pvtSuper, g_vtfly.pvtSuper, g_vtrat.pvtSuper, g_vtroh.pvtSuper, g_vtroc.pvtSuper,
g_vtrost.pvtSuper, g_vtrop.pvtSuper, g_vtdart.pvtSuper, g_vtubv.pvtSuper, g_vtubp.pvtSuper, g_vtdsp.pvtSuper, g_vtjlo.pvtSuper, g_vtpufft.pvtSuper, g_vtmrkv.pvtSuper, g_vtlgnb.pvtSuper, 
g_vtblipg.pvtSuper, g_vtcamera.pvtSuper, g_vtlbone.pvtSuper, g_vtemitter.pvtSuper, g_vtlight.pvtSuper, g_vtsch.pvtSuper, g_vtlikh.pvtSuper, g_vtchkpnt.pvtSuper, g_vtproxy.pvtSuper, g_vtsky.pvtSuper,
g_vtdprize.pvtSuper, g_vtcharm.pvtSuper, g_vtcoin.pvtSuper, g_vtkey.pvtSuper, g_vtgold.pvtSuper, g_vtlock.pvtSuper, g_vtlockg.pvtSuper, g_vttail.pvtSuper, g_vtrob.pvtSuper, g_vtflash.pvtSuper,
g_vtdysh.pvtSuper, g_vtscentmap.pvtSuper, g_vtwaypoint.pvtSuper, g_vttn.pvtSuper, g_vtjloc.pvtSuper, g_vtdialog.pvtSuper, g_vtspeaker.pvtSuper, g_vtrope.pvtSuper, g_vtwm.pvtSuper, g_vtpuffb.pvtSuper,
g_vtcrbrain.pvtSuper, g_vtmgc.pvtSuper, g_vtjackb.pvtSuper, g_vtjackn.pvtSuper, g_vtjackf.pvtSuper, g_vtsw.pvtSuper, g_vtcm.pvtSuper, g_vtshape.pvtSuper, g_vthshape.pvtSuper, g_vtpipe.pvtSuper,
g_vtrail.pvtSuper, g_vtlanding.pvtSuper, g_vtxfm.pvtSuper, g_vtwarp.pvtSuper, g_vttarget.pvtSuper, g_vthnd.pvtSuper, g_vtexpl.pvtSuper, g_vtexplg.pvtSuper, g_vtexplo.pvtSuper, g_vtexpls.pvtSuper,
g_vtvol.pvtSuper, g_vtrathole.pvtSuper, g_vtpuffv.pvtSuper, g_vtexit.pvtSuper, g_vtpnt.pvtSuper, g_vtpntsv.pvtSuper, g_vtpnts.pvtSuper, g_vtpntvec.pvtSuper, g_vthpnt.pvtSuper, g_vtjmt.pvtSuper,
g_vtspire.pvtSuper, g_vtscan.pvtSuper, g_vtaseg.pvtSuper, g_vtasegbl.pvtSuper, g_vtmap.pvtSuper, g_vt_viszone.pvtSuper, g_vtvismap.pvtSuper, g_vtfrzg.pvtSuper, g_vtsm.pvtSuper, g_vtsgg.pvtSuper,
g_vtpathzone.pvtSuper, g_vtrchm.pvtSuper, g_vtrwm.pvtSuper, g_vtwr.pvtSuper, g_vtkeyhole.pvtSuper, g_vtjsg.pvtSuper, g_vtasega.pvtSuper, g_vtsma.pvtSuper};