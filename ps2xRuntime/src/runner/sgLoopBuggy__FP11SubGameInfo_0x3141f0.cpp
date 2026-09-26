#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sgLoopBuggy__FP11SubGameInfo
// Address: 0x3141f0 - 0x314418
void sgLoopBuggy__FP11SubGameInfo_0x3141f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sgLoopBuggy__FP11SubGameInfo_0x3141f0");
#endif

    switch (ctx->pc) {
        case 0x3141f0u: goto label_3141f0;
        case 0x3141f4u: goto label_3141f4;
        case 0x3141f8u: goto label_3141f8;
        case 0x3141fcu: goto label_3141fc;
        case 0x314200u: goto label_314200;
        case 0x314204u: goto label_314204;
        case 0x314208u: goto label_314208;
        case 0x31420cu: goto label_31420c;
        case 0x314210u: goto label_314210;
        case 0x314214u: goto label_314214;
        case 0x314218u: goto label_314218;
        case 0x31421cu: goto label_31421c;
        case 0x314220u: goto label_314220;
        case 0x314224u: goto label_314224;
        case 0x314228u: goto label_314228;
        case 0x31422cu: goto label_31422c;
        case 0x314230u: goto label_314230;
        case 0x314234u: goto label_314234;
        case 0x314238u: goto label_314238;
        case 0x31423cu: goto label_31423c;
        case 0x314240u: goto label_314240;
        case 0x314244u: goto label_314244;
        case 0x314248u: goto label_314248;
        case 0x31424cu: goto label_31424c;
        case 0x314250u: goto label_314250;
        case 0x314254u: goto label_314254;
        case 0x314258u: goto label_314258;
        case 0x31425cu: goto label_31425c;
        case 0x314260u: goto label_314260;
        case 0x314264u: goto label_314264;
        case 0x314268u: goto label_314268;
        case 0x31426cu: goto label_31426c;
        case 0x314270u: goto label_314270;
        case 0x314274u: goto label_314274;
        case 0x314278u: goto label_314278;
        case 0x31427cu: goto label_31427c;
        case 0x314280u: goto label_314280;
        case 0x314284u: goto label_314284;
        case 0x314288u: goto label_314288;
        case 0x31428cu: goto label_31428c;
        case 0x314290u: goto label_314290;
        case 0x314294u: goto label_314294;
        case 0x314298u: goto label_314298;
        case 0x31429cu: goto label_31429c;
        case 0x3142a0u: goto label_3142a0;
        case 0x3142a4u: goto label_3142a4;
        case 0x3142a8u: goto label_3142a8;
        case 0x3142acu: goto label_3142ac;
        case 0x3142b0u: goto label_3142b0;
        case 0x3142b4u: goto label_3142b4;
        case 0x3142b8u: goto label_3142b8;
        case 0x3142bcu: goto label_3142bc;
        case 0x3142c0u: goto label_3142c0;
        case 0x3142c4u: goto label_3142c4;
        case 0x3142c8u: goto label_3142c8;
        case 0x3142ccu: goto label_3142cc;
        case 0x3142d0u: goto label_3142d0;
        case 0x3142d4u: goto label_3142d4;
        case 0x3142d8u: goto label_3142d8;
        case 0x3142dcu: goto label_3142dc;
        case 0x3142e0u: goto label_3142e0;
        case 0x3142e4u: goto label_3142e4;
        case 0x3142e8u: goto label_3142e8;
        case 0x3142ecu: goto label_3142ec;
        case 0x3142f0u: goto label_3142f0;
        case 0x3142f4u: goto label_3142f4;
        case 0x3142f8u: goto label_3142f8;
        case 0x3142fcu: goto label_3142fc;
        case 0x314300u: goto label_314300;
        case 0x314304u: goto label_314304;
        case 0x314308u: goto label_314308;
        case 0x31430cu: goto label_31430c;
        case 0x314310u: goto label_314310;
        case 0x314314u: goto label_314314;
        case 0x314318u: goto label_314318;
        case 0x31431cu: goto label_31431c;
        case 0x314320u: goto label_314320;
        case 0x314324u: goto label_314324;
        case 0x314328u: goto label_314328;
        case 0x31432cu: goto label_31432c;
        case 0x314330u: goto label_314330;
        case 0x314334u: goto label_314334;
        case 0x314338u: goto label_314338;
        case 0x31433cu: goto label_31433c;
        case 0x314340u: goto label_314340;
        case 0x314344u: goto label_314344;
        case 0x314348u: goto label_314348;
        case 0x31434cu: goto label_31434c;
        case 0x314350u: goto label_314350;
        case 0x314354u: goto label_314354;
        case 0x314358u: goto label_314358;
        case 0x31435cu: goto label_31435c;
        case 0x314360u: goto label_314360;
        case 0x314364u: goto label_314364;
        case 0x314368u: goto label_314368;
        case 0x31436cu: goto label_31436c;
        case 0x314370u: goto label_314370;
        case 0x314374u: goto label_314374;
        case 0x314378u: goto label_314378;
        case 0x31437cu: goto label_31437c;
        case 0x314380u: goto label_314380;
        case 0x314384u: goto label_314384;
        case 0x314388u: goto label_314388;
        case 0x31438cu: goto label_31438c;
        case 0x314390u: goto label_314390;
        case 0x314394u: goto label_314394;
        case 0x314398u: goto label_314398;
        case 0x31439cu: goto label_31439c;
        case 0x3143a0u: goto label_3143a0;
        case 0x3143a4u: goto label_3143a4;
        case 0x3143a8u: goto label_3143a8;
        case 0x3143acu: goto label_3143ac;
        case 0x3143b0u: goto label_3143b0;
        case 0x3143b4u: goto label_3143b4;
        case 0x3143b8u: goto label_3143b8;
        case 0x3143bcu: goto label_3143bc;
        case 0x3143c0u: goto label_3143c0;
        case 0x3143c4u: goto label_3143c4;
        case 0x3143c8u: goto label_3143c8;
        case 0x3143ccu: goto label_3143cc;
        case 0x3143d0u: goto label_3143d0;
        case 0x3143d4u: goto label_3143d4;
        case 0x3143d8u: goto label_3143d8;
        case 0x3143dcu: goto label_3143dc;
        case 0x3143e0u: goto label_3143e0;
        case 0x3143e4u: goto label_3143e4;
        case 0x3143e8u: goto label_3143e8;
        case 0x3143ecu: goto label_3143ec;
        case 0x3143f0u: goto label_3143f0;
        case 0x3143f4u: goto label_3143f4;
        case 0x3143f8u: goto label_3143f8;
        case 0x3143fcu: goto label_3143fc;
        case 0x314400u: goto label_314400;
        case 0x314404u: goto label_314404;
        case 0x314408u: goto label_314408;
        case 0x31440cu: goto label_31440c;
        case 0x314410u: goto label_314410;
        case 0x314414u: goto label_314414;
        default: break;
    }

    ctx->pc = 0x3141f0u;

label_3141f0:
    // 0x3141f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3141f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3141f4:
    // 0x3141f4: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x3141f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
label_3141f8:
    // 0x3141f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3141f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3141fc:
    // 0x3141fc: 0x24a57b60  addiu       $a1, $a1, 0x7B60
    ctx->pc = 0x3141fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31584));
label_314200:
    // 0x314200: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x314200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_314204:
    // 0x314204: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x314204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_314208:
    // 0x314208: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x314208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_31420c:
    // 0x31420c: 0x8f82a2dc  lw          $v0, -0x5D24($gp)
    ctx->pc = 0x31420cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943452)));
label_314210:
    // 0x314210: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x314210u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_314214:
    // 0x314214: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_314218:
    if (ctx->pc == 0x314218u) {
        ctx->pc = 0x314218u;
            // 0x314218: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31421Cu;
        goto label_31421c;
    }
    ctx->pc = 0x314214u;
    {
        const bool branch_taken_0x314214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x314218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314214u;
            // 0x314218: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314214) {
            ctx->pc = 0x3142C4u;
            goto label_3142c4;
        }
    }
    ctx->pc = 0x31421Cu;
label_31421c:
    // 0x31421c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x31421cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_314220:
    // 0x314220: 0xc0bb538  jal         func_2ED4E0
label_314224:
    if (ctx->pc == 0x314224u) {
        ctx->pc = 0x314224u;
            // 0x314224: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314228u;
        goto label_314228;
    }
    ctx->pc = 0x314220u;
    SET_GPR_U32(ctx, 31, 0x314228u);
    ctx->pc = 0x314224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314220u;
            // 0x314224: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314228u; }
        if (ctx->pc != 0x314228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314228u; }
        if (ctx->pc != 0x314228u) { return; }
    }
    ctx->pc = 0x314228u;
label_314228:
    // 0x314228: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_31422c:
    if (ctx->pc == 0x31422Cu) {
        ctx->pc = 0x31422Cu;
            // 0x31422c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314230u;
        goto label_314230;
    }
    ctx->pc = 0x314228u;
    {
        const bool branch_taken_0x314228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31422Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314228u;
            // 0x31422c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314228) {
            ctx->pc = 0x314288u;
            goto label_314288;
        }
    }
    ctx->pc = 0x314230u;
label_314230:
    // 0x314230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x314230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_314234:
    // 0x314234: 0xc0a0e78  jal         func_2839E0
label_314238:
    if (ctx->pc == 0x314238u) {
        ctx->pc = 0x314238u;
            // 0x314238: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x31423Cu;
        goto label_31423c;
    }
    ctx->pc = 0x314234u;
    SET_GPR_U32(ctx, 31, 0x31423Cu);
    ctx->pc = 0x314238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314234u;
            // 0x314238: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2839E0u;
    if (runtime->hasFunction(0x2839E0u)) {
        auto targetFn = runtime->lookupFunction(0x2839E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31423Cu; }
        if (ctx->pc != 0x31423Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMessage__6CSceneFi_0x2839e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31423Cu; }
        if (ctx->pc != 0x31423Cu) { return; }
    }
    ctx->pc = 0x31423Cu;
label_31423c:
    // 0x31423c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31423cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_314240:
    // 0x314240: 0x8c421ae4  lw          $v0, 0x1AE4($v0)
    ctx->pc = 0x314240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6884)));
label_314244:
    // 0x314244: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_314248:
    if (ctx->pc == 0x314248u) {
        ctx->pc = 0x314248u;
            // 0x314248: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x31424Cu;
        goto label_31424c;
    }
    ctx->pc = 0x314244u;
    {
        const bool branch_taken_0x314244 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x314248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314244u;
            // 0x314248: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314244) {
            ctx->pc = 0x314250u;
            goto label_314250;
        }
    }
    ctx->pc = 0x31424Cu;
label_31424c:
    // 0x31424c: 0xae401b00  sw          $zero, 0x1B00($s2)
    ctx->pc = 0x31424cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6912), GPR_U32(ctx, 0));
label_314250:
    // 0x314250: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x314250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_314254:
    // 0x314254: 0xc0547dc  jal         func_151F70
label_314258:
    if (ctx->pc == 0x314258u) {
        ctx->pc = 0x314258u;
            // 0x314258: 0xae421ae4  sw          $v0, 0x1AE4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 6884), GPR_U32(ctx, 2));
        ctx->pc = 0x31425Cu;
        goto label_31425c;
    }
    ctx->pc = 0x314254u;
    SET_GPR_U32(ctx, 31, 0x31425Cu);
    ctx->pc = 0x314258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314254u;
            // 0x314258: 0xae421ae4  sw          $v0, 0x1AE4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 6884), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31425Cu; }
        if (ctx->pc != 0x31425Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31425Cu; }
        if (ctx->pc != 0x31425Cu) { return; }
    }
    ctx->pc = 0x31425Cu;
label_31425c:
    // 0x31425c: 0xe64001b8  swc1        $f0, 0x1B8($s2)
    ctx->pc = 0x31425cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 440), bits); }
label_314260:
    // 0x314260: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x314260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_314264:
    // 0x314264: 0xae4217e4  sw          $v0, 0x17E4($s2)
    ctx->pc = 0x314264u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6116), GPR_U32(ctx, 2));
label_314268:
    // 0x314268: 0xae4017e8  sw          $zero, 0x17E8($s2)
    ctx->pc = 0x314268u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6120), GPR_U32(ctx, 0));
label_31426c:
    // 0x31426c: 0xae40018c  sw          $zero, 0x18C($s2)
    ctx->pc = 0x31426cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 396), GPR_U32(ctx, 0));
label_314270:
    // 0x314270: 0xae400188  sw          $zero, 0x188($s2)
    ctx->pc = 0x314270u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 392), GPR_U32(ctx, 0));
label_314274:
    // 0x314274: 0xae420134  sw          $v0, 0x134($s2)
    ctx->pc = 0x314274u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 308), GPR_U32(ctx, 2));
label_314278:
    // 0x314278: 0xae420138  sw          $v0, 0x138($s2)
    ctx->pc = 0x314278u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 312), GPR_U32(ctx, 2));
label_31427c:
    // 0x31427c: 0xae40014c  sw          $zero, 0x14C($s2)
    ctx->pc = 0x31427cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 0));
label_314280:
    // 0x314280: 0xaf80a2dc  sw          $zero, -0x5D24($gp)
    ctx->pc = 0x314280u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943452), GPR_U32(ctx, 0));
label_314284:
    // 0x314284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x314284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_314288:
    // 0x314288: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x314288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31428c:
    // 0x31428c: 0xc0693a0  jal         func_1A4E80
label_314290:
    if (ctx->pc == 0x314290u) {
        ctx->pc = 0x314290u;
            // 0x314290: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x314294u;
        goto label_314294;
    }
    ctx->pc = 0x31428Cu;
    SET_GPR_U32(ctx, 31, 0x314294u);
    ctx->pc = 0x314290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31428Cu;
            // 0x314290: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E80u;
    if (runtime->hasFunction(0x1A4E80u)) {
        auto targetFn = runtime->lookupFunction(0x1A4E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314294u; }
        if (ctx->pc != 0x314294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditCameraControl__FP6CSceneP11CPadControlPA4_f_0x1a4e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314294u; }
        if (ctx->pc != 0x314294u) { return; }
    }
    ctx->pc = 0x314294u;
label_314294:
    // 0x314294: 0x8e052e54  lw          $a1, 0x2E54($s0)
    ctx->pc = 0x314294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11860)));
label_314298:
    // 0x314298: 0xc0a0e30  jal         func_2838C0
label_31429c:
    if (ctx->pc == 0x31429Cu) {
        ctx->pc = 0x31429Cu;
            // 0x31429c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3142A0u;
        goto label_3142a0;
    }
    ctx->pc = 0x314298u;
    SET_GPR_U32(ctx, 31, 0x3142A0u);
    ctx->pc = 0x31429Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314298u;
            // 0x31429c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3142A0u; }
        if (ctx->pc != 0x3142A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3142A0u; }
        if (ctx->pc != 0x3142A0u) { return; }
    }
    ctx->pc = 0x3142A0u;
label_3142a0:
    // 0x3142a0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_3142a4:
    if (ctx->pc == 0x3142A4u) {
        ctx->pc = 0x3142A8u;
        goto label_3142a8;
    }
    ctx->pc = 0x3142A0u;
    {
        const bool branch_taken_0x3142a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3142a0) {
            ctx->pc = 0x3142E4u;
            goto label_3142e4;
        }
    }
    ctx->pc = 0x3142A8u;
label_3142a8:
    // 0x3142a8: 0x8c590060  lw          $t9, 0x60($v0)
    ctx->pc = 0x3142a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_3142ac:
    // 0x3142ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3142acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3142b0:
    // 0x3142b0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3142b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3142b4:
    // 0x3142b4: 0x320f809  jalr        $t9
label_3142b8:
    if (ctx->pc == 0x3142B8u) {
        ctx->pc = 0x3142B8u;
            // 0x3142b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3142BCu;
        goto label_3142bc;
    }
    ctx->pc = 0x3142B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3142BCu);
        ctx->pc = 0x3142B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3142B4u;
            // 0x3142b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3142BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3142BCu; }
            if (ctx->pc != 0x3142BCu) { return; }
        }
        }
    }
    ctx->pc = 0x3142BCu;
label_3142bc:
    // 0x3142bc: 0x1000000a  b           . + 4 + (0xA << 2)
label_3142c0:
    if (ctx->pc == 0x3142C0u) {
        ctx->pc = 0x3142C0u;
            // 0x3142c0: 0x8f84a284  lw          $a0, -0x5D7C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943364)));
        ctx->pc = 0x3142C4u;
        goto label_3142c4;
    }
    ctx->pc = 0x3142BCu;
    {
        const bool branch_taken_0x3142bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3142C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3142BCu;
            // 0x3142c0: 0x8f84a284  lw          $a0, -0x5D7C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3142bc) {
            ctx->pc = 0x3142E8u;
            goto label_3142e8;
        }
    }
    ctx->pc = 0x3142C4u;
label_3142c4:
    // 0x3142c4: 0xc0c5268  jal         func_3149A0
label_3142c8:
    if (ctx->pc == 0x3142C8u) {
        ctx->pc = 0x3142C8u;
            // 0x3142c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3142CCu;
        goto label_3142cc;
    }
    ctx->pc = 0x3142C4u;
    SET_GPR_U32(ctx, 31, 0x3142CCu);
    ctx->pc = 0x3142C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3142C4u;
            // 0x3142c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3149A0u;
    if (runtime->hasFunction(0x3149A0u)) {
        auto targetFn = runtime->lookupFunction(0x3149A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3142CCu; }
        if (ctx->pc != 0x3142CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CharaControl__FP6CSceneP11CPadControl_0x3149a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3142CCu; }
        if (ctx->pc != 0x3142CCu) { return; }
    }
    ctx->pc = 0x3142CCu;
label_3142cc:
    // 0x3142cc: 0xc0c5a18  jal         func_316860
label_3142d0:
    if (ctx->pc == 0x3142D0u) {
        ctx->pc = 0x3142D0u;
            // 0x3142d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3142D4u;
        goto label_3142d4;
    }
    ctx->pc = 0x3142CCu;
    SET_GPR_U32(ctx, 31, 0x3142D4u);
    ctx->pc = 0x3142D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3142CCu;
            // 0x3142d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316860u;
    if (runtime->hasFunction(0x316860u)) {
        auto targetFn = runtime->lookupFunction(0x316860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3142D4u; }
        if (ctx->pc != 0x3142D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BombCheck__FP6CScene_0x316860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3142D4u; }
        if (ctx->pc != 0x3142D4u) { return; }
    }
    ctx->pc = 0x3142D4u;
label_3142d4:
    // 0x3142d4: 0xc0c5544  jal         func_315510
label_3142d8:
    if (ctx->pc == 0x3142D8u) {
        ctx->pc = 0x3142D8u;
            // 0x3142d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3142DCu;
        goto label_3142dc;
    }
    ctx->pc = 0x3142D4u;
    SET_GPR_U32(ctx, 31, 0x3142DCu);
    ctx->pc = 0x3142D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3142D4u;
            // 0x3142d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x315510u;
    if (runtime->hasFunction(0x315510u)) {
        auto targetFn = runtime->lookupFunction(0x315510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3142DCu; }
        if (ctx->pc != 0x3142DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuggyControl__FP6CScene_0x315510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3142DCu; }
        if (ctx->pc != 0x3142DCu) { return; }
    }
    ctx->pc = 0x3142DCu;
label_3142dc:
    // 0x3142dc: 0xc0c588c  jal         func_316230
label_3142e0:
    if (ctx->pc == 0x3142E0u) {
        ctx->pc = 0x3142E0u;
            // 0x3142e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3142E4u;
        goto label_3142e4;
    }
    ctx->pc = 0x3142DCu;
    SET_GPR_U32(ctx, 31, 0x3142E4u);
    ctx->pc = 0x3142E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3142DCu;
            // 0x3142e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316230u;
    if (runtime->hasFunction(0x316230u)) {
        auto targetFn = runtime->lookupFunction(0x316230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3142E4u; }
        if (ctx->pc != 0x3142E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BombControl__FP6CScene_0x316230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3142E4u; }
        if (ctx->pc != 0x3142E4u) { return; }
    }
    ctx->pc = 0x3142E4u;
label_3142e4:
    // 0x3142e4: 0x8f84a284  lw          $a0, -0x5D7C($gp)
    ctx->pc = 0x3142e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943364)));
label_3142e8:
    // 0x3142e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3142e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3142ec:
    // 0x3142ec: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x3142ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_3142f0:
    // 0x3142f0: 0x320f809  jalr        $t9
label_3142f4:
    if (ctx->pc == 0x3142F4u) {
        ctx->pc = 0x3142F8u;
        goto label_3142f8;
    }
    ctx->pc = 0x3142F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3142F8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3142F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3142F8u; }
            if (ctx->pc != 0x3142F8u) { return; }
        }
        }
    }
    ctx->pc = 0x3142F8u;
label_3142f8:
    // 0x3142f8: 0x8f84a288  lw          $a0, -0x5D78($gp)
    ctx->pc = 0x3142f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943368)));
label_3142fc:
    // 0x3142fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3142fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_314300:
    // 0x314300: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x314300u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_314304:
    // 0x314304: 0x320f809  jalr        $t9
label_314308:
    if (ctx->pc == 0x314308u) {
        ctx->pc = 0x31430Cu;
        goto label_31430c;
    }
    ctx->pc = 0x314304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x31430Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x31430Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x31430Cu; }
            if (ctx->pc != 0x31430Cu) { return; }
        }
        }
    }
    ctx->pc = 0x31430Cu;
label_31430c:
    // 0x31430c: 0x8f84a28c  lw          $a0, -0x5D74($gp)
    ctx->pc = 0x31430cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943372)));
label_314310:
    // 0x314310: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x314310u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_314314:
    // 0x314314: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x314314u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_314318:
    // 0x314318: 0x320f809  jalr        $t9
label_31431c:
    if (ctx->pc == 0x31431Cu) {
        ctx->pc = 0x314320u;
        goto label_314320;
    }
    ctx->pc = 0x314318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x314320u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x314320u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x314320u; }
            if (ctx->pc != 0x314320u) { return; }
        }
        }
    }
    ctx->pc = 0x314320u;
label_314320:
    // 0x314320: 0x8f84a290  lw          $a0, -0x5D70($gp)
    ctx->pc = 0x314320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943376)));
label_314324:
    // 0x314324: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x314324u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_314328:
    // 0x314328: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x314328u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_31432c:
    // 0x31432c: 0x320f809  jalr        $t9
label_314330:
    if (ctx->pc == 0x314330u) {
        ctx->pc = 0x314334u;
        goto label_314334;
    }
    ctx->pc = 0x31432Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x314334u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x314334u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x314334u; }
            if (ctx->pc != 0x314334u) { return; }
        }
        }
    }
    ctx->pc = 0x314334u;
label_314334:
    // 0x314334: 0x8f84a294  lw          $a0, -0x5D6C($gp)
    ctx->pc = 0x314334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943380)));
label_314338:
    // 0x314338: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x314338u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_31433c:
    // 0x31433c: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x31433cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_314340:
    // 0x314340: 0x320f809  jalr        $t9
label_314344:
    if (ctx->pc == 0x314344u) {
        ctx->pc = 0x314348u;
        goto label_314348;
    }
    ctx->pc = 0x314340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x314348u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x314348u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x314348u; }
            if (ctx->pc != 0x314348u) { return; }
        }
        }
    }
    ctx->pc = 0x314348u;
label_314348:
    // 0x314348: 0x8f82a2d0  lw          $v0, -0x5D30($gp)
    ctx->pc = 0x314348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943440)));
label_31434c:
    // 0x31434c: 0x1c40001c  bgtz        $v0, . + 4 + (0x1C << 2)
label_314350:
    if (ctx->pc == 0x314350u) {
        ctx->pc = 0x314350u;
            // 0x314350: 0x26042c70  addiu       $a0, $s0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11376));
        ctx->pc = 0x314354u;
        goto label_314354;
    }
    ctx->pc = 0x31434Cu;
    {
        const bool branch_taken_0x31434c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x314350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31434Cu;
            // 0x314350: 0x26042c70  addiu       $a0, $s0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31434c) {
            ctx->pc = 0x3143C0u;
            goto label_3143c0;
        }
    }
    ctx->pc = 0x314354u;
label_314354:
    // 0x314354: 0x8f828644  lw          $v0, -0x79BC($gp)
    ctx->pc = 0x314354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936132)));
label_314358:
    // 0x314358: 0x1c400009  bgtz        $v0, . + 4 + (0x9 << 2)
label_31435c:
    if (ctx->pc == 0x31435Cu) {
        ctx->pc = 0x314360u;
        goto label_314360;
    }
    ctx->pc = 0x314358u;
    {
        const bool branch_taken_0x314358 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x314358) {
            ctx->pc = 0x314380u;
            goto label_314380;
        }
    }
    ctx->pc = 0x314360u;
label_314360:
    // 0x314360: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x314360u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_314364:
    // 0x314364: 0x240201f7  addiu       $v0, $zero, 0x1F7
    ctx->pc = 0x314364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 503));
label_314368:
    // 0x314368: 0x26042c70  addiu       $a0, $s0, 0x2C70
    ctx->pc = 0x314368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11376));
label_31436c:
    // 0x31436c: 0xaf82a2d0  sw          $v0, -0x5D30($gp)
    ctx->pc = 0x31436cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943440), GPR_U32(ctx, 2));
label_314370:
    // 0x314370: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x314370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_314374:
    // 0x314374: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x314374u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_314378:
    // 0x314378: 0xc05f610  jal         func_17D840
label_31437c:
    if (ctx->pc == 0x31437Cu) {
        ctx->pc = 0x31437Cu;
            // 0x31437c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x314380u;
        goto label_314380;
    }
    ctx->pc = 0x314378u;
    SET_GPR_U32(ctx, 31, 0x314380u);
    ctx->pc = 0x31437Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314378u;
            // 0x31437c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314380u; }
        if (ctx->pc != 0x314380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314380u; }
        if (ctx->pc != 0x314380u) { return; }
    }
    ctx->pc = 0x314380u;
label_314380:
    // 0x314380: 0xc780a2f0  lwc1        $f0, -0x5D10($gp)
    ctx->pc = 0x314380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_314384:
    // 0x314384: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x314384u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_314388:
    // 0x314388: 0x0  nop
    ctx->pc = 0x314388u;
    // NOP
label_31438c:
    // 0x31438c: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x31438cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_314390:
    // 0x314390: 0x0  nop
    ctx->pc = 0x314390u;
    // NOP
label_314394:
    // 0x314394: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_314398:
    if (ctx->pc == 0x314398u) {
        ctx->pc = 0x314398u;
            // 0x314398: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31439Cu;
        goto label_31439c;
    }
    ctx->pc = 0x314394u;
    {
        const bool branch_taken_0x314394 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x314398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314394u;
            // 0x314398: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314394) {
            ctx->pc = 0x314400u;
            goto label_314400;
        }
    }
    ctx->pc = 0x31439Cu;
label_31439c:
    // 0x31439c: 0x240201f6  addiu       $v0, $zero, 0x1F6
    ctx->pc = 0x31439cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 502));
label_3143a0:
    // 0x3143a0: 0x26042c70  addiu       $a0, $s0, 0x2C70
    ctx->pc = 0x3143a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11376));
label_3143a4:
    // 0x3143a4: 0xaf82a2d0  sw          $v0, -0x5D30($gp)
    ctx->pc = 0x3143a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943440), GPR_U32(ctx, 2));
label_3143a8:
    // 0x3143a8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3143a8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3143ac:
    // 0x3143ac: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x3143acu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_3143b0:
    // 0x3143b0: 0xc05f610  jal         func_17D840
label_3143b4:
    if (ctx->pc == 0x3143B4u) {
        ctx->pc = 0x3143B4u;
            // 0x3143b4: 0x2405005a  addiu       $a1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->pc = 0x3143B8u;
        goto label_3143b8;
    }
    ctx->pc = 0x3143B0u;
    SET_GPR_U32(ctx, 31, 0x3143B8u);
    ctx->pc = 0x3143B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3143B0u;
            // 0x3143b4: 0x2405005a  addiu       $a1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3143B8u; }
        if (ctx->pc != 0x3143B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3143B8u; }
        if (ctx->pc != 0x3143B8u) { return; }
    }
    ctx->pc = 0x3143B8u;
label_3143b8:
    // 0x3143b8: 0x10000010  b           . + 4 + (0x10 << 2)
label_3143bc:
    if (ctx->pc == 0x3143BCu) {
        ctx->pc = 0x3143C0u;
        goto label_3143c0;
    }
    ctx->pc = 0x3143B8u;
    {
        const bool branch_taken_0x3143b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3143b8) {
            ctx->pc = 0x3143FCu;
            goto label_3143fc;
        }
    }
    ctx->pc = 0x3143C0u;
label_3143c0:
    // 0x3143c0: 0xc05f65c  jal         func_17D970
label_3143c4:
    if (ctx->pc == 0x3143C4u) {
        ctx->pc = 0x3143C8u;
        goto label_3143c8;
    }
    ctx->pc = 0x3143C0u;
    SET_GPR_U32(ctx, 31, 0x3143C8u);
    ctx->pc = 0x17D970u;
    if (runtime->hasFunction(0x17D970u)) {
        auto targetFn = runtime->lookupFunction(0x17D970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3143C8u; }
        if (ctx->pc != 0x3143C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheck__10CFadeInOutFv_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3143C8u; }
        if (ctx->pc != 0x3143C8u) { return; }
    }
    ctx->pc = 0x3143C8u;
label_3143c8:
    // 0x3143c8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_3143cc:
    if (ctx->pc == 0x3143CCu) {
        ctx->pc = 0x3143CCu;
            // 0x3143cc: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x3143D0u;
        goto label_3143d0;
    }
    ctx->pc = 0x3143C8u;
    {
        const bool branch_taken_0x3143c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3143CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3143C8u;
            // 0x3143cc: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3143c8) {
            ctx->pc = 0x3143FCu;
            goto label_3143fc;
        }
    }
    ctx->pc = 0x3143D0u;
label_3143d0:
    // 0x3143d0: 0x34210540  ori         $at, $at, 0x540
    ctx->pc = 0x3143d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1344);
label_3143d4:
    // 0x3143d4: 0xc063240  jal         func_18C900
label_3143d8:
    if (ctx->pc == 0x3143D8u) {
        ctx->pc = 0x3143D8u;
            // 0x3143d8: 0x2012021  addu        $a0, $s0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
        ctx->pc = 0x3143DCu;
        goto label_3143dc;
    }
    ctx->pc = 0x3143D4u;
    SET_GPR_U32(ctx, 31, 0x3143DCu);
    ctx->pc = 0x3143D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3143D4u;
            // 0x3143d8: 0x2012021  addu        $a0, $s0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C900u;
    if (runtime->hasFunction(0x18C900u)) {
        auto targetFn = runtime->lookupFunction(0x18C900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3143DCu; }
        if (ctx->pc != 0x3143DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AllSeStop__11CLoopSeMngrFv_0x18c900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3143DCu; }
        if (ctx->pc != 0x3143DCu) { return; }
    }
    ctx->pc = 0x3143DCu;
label_3143dc:
    // 0x3143dc: 0x8f85a2d0  lw          $a1, -0x5D30($gp)
    ctx->pc = 0x3143dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943440)));
label_3143e0:
    // 0x3143e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3143e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3143e4:
    // 0x3143e4: 0xc0b1f3c  jal         func_2C7CF0
label_3143e8:
    if (ctx->pc == 0x3143E8u) {
        ctx->pc = 0x3143E8u;
            // 0x3143e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3143ECu;
        goto label_3143ec;
    }
    ctx->pc = 0x3143E4u;
    SET_GPR_U32(ctx, 31, 0x3143ECu);
    ctx->pc = 0x3143E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3143E4u;
            // 0x3143e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7CF0u;
    if (runtime->hasFunction(0x2C7CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2C7CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3143ECu; }
        if (ctx->pc != 0x3143ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RunEvent__6CSceneFiP15CSceneEventData_0x2c7cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3143ECu; }
        if (ctx->pc != 0x3143ECu) { return; }
    }
    ctx->pc = 0x3143ECu;
label_3143ec:
    // 0x3143ec: 0xc0c5044  jal         func_314110
label_3143f0:
    if (ctx->pc == 0x3143F0u) {
        ctx->pc = 0x3143F0u;
            // 0x3143f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3143F4u;
        goto label_3143f4;
    }
    ctx->pc = 0x3143ECu;
    SET_GPR_U32(ctx, 31, 0x3143F4u);
    ctx->pc = 0x3143F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3143ECu;
            // 0x3143f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x314110u;
    if (runtime->hasFunction(0x314110u)) {
        auto targetFn = runtime->lookupFunction(0x314110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3143F4u; }
        if (ctx->pc != 0x3143F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgExitBuggy__FP11SubGameInfo_0x314110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3143F4u; }
        if (ctx->pc != 0x3143F4u) { return; }
    }
    ctx->pc = 0x3143F4u;
label_3143f4:
    // 0x3143f4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3143f8:
    if (ctx->pc == 0x3143F8u) {
        ctx->pc = 0x3143F8u;
            // 0x3143f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3143FCu;
        goto label_3143fc;
    }
    ctx->pc = 0x3143F4u;
    {
        const bool branch_taken_0x3143f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3143F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3143F4u;
            // 0x3143f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3143f4) {
            ctx->pc = 0x314400u;
            goto label_314400;
        }
    }
    ctx->pc = 0x3143FCu;
label_3143fc:
    // 0x3143fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3143fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_314400:
    // 0x314400: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x314400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_314404:
    // 0x314404: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x314404u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_314408:
    // 0x314408: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x314408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31440c:
    // 0x31440c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31440cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_314410:
    // 0x314410: 0x3e00008  jr          $ra
label_314414:
    if (ctx->pc == 0x314414u) {
        ctx->pc = 0x314414u;
            // 0x314414: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x314418u;
        goto label_fallthrough_0x314410;
    }
    ctx->pc = 0x314410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314410u;
            // 0x314414: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x314410:
    ctx->pc = 0x314418u;
}
