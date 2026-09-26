#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapFIX_CAMERA_RECT__FP9SPI_STACKi
// Address: 0x163190 - 0x1633a8
void mapFIX_CAMERA_RECT__FP9SPI_STACKi_0x163190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapFIX_CAMERA_RECT__FP9SPI_STACKi_0x163190");
#endif

    switch (ctx->pc) {
        case 0x163190u: goto label_163190;
        case 0x163194u: goto label_163194;
        case 0x163198u: goto label_163198;
        case 0x16319cu: goto label_16319c;
        case 0x1631a0u: goto label_1631a0;
        case 0x1631a4u: goto label_1631a4;
        case 0x1631a8u: goto label_1631a8;
        case 0x1631acu: goto label_1631ac;
        case 0x1631b0u: goto label_1631b0;
        case 0x1631b4u: goto label_1631b4;
        case 0x1631b8u: goto label_1631b8;
        case 0x1631bcu: goto label_1631bc;
        case 0x1631c0u: goto label_1631c0;
        case 0x1631c4u: goto label_1631c4;
        case 0x1631c8u: goto label_1631c8;
        case 0x1631ccu: goto label_1631cc;
        case 0x1631d0u: goto label_1631d0;
        case 0x1631d4u: goto label_1631d4;
        case 0x1631d8u: goto label_1631d8;
        case 0x1631dcu: goto label_1631dc;
        case 0x1631e0u: goto label_1631e0;
        case 0x1631e4u: goto label_1631e4;
        case 0x1631e8u: goto label_1631e8;
        case 0x1631ecu: goto label_1631ec;
        case 0x1631f0u: goto label_1631f0;
        case 0x1631f4u: goto label_1631f4;
        case 0x1631f8u: goto label_1631f8;
        case 0x1631fcu: goto label_1631fc;
        case 0x163200u: goto label_163200;
        case 0x163204u: goto label_163204;
        case 0x163208u: goto label_163208;
        case 0x16320cu: goto label_16320c;
        case 0x163210u: goto label_163210;
        case 0x163214u: goto label_163214;
        case 0x163218u: goto label_163218;
        case 0x16321cu: goto label_16321c;
        case 0x163220u: goto label_163220;
        case 0x163224u: goto label_163224;
        case 0x163228u: goto label_163228;
        case 0x16322cu: goto label_16322c;
        case 0x163230u: goto label_163230;
        case 0x163234u: goto label_163234;
        case 0x163238u: goto label_163238;
        case 0x16323cu: goto label_16323c;
        case 0x163240u: goto label_163240;
        case 0x163244u: goto label_163244;
        case 0x163248u: goto label_163248;
        case 0x16324cu: goto label_16324c;
        case 0x163250u: goto label_163250;
        case 0x163254u: goto label_163254;
        case 0x163258u: goto label_163258;
        case 0x16325cu: goto label_16325c;
        case 0x163260u: goto label_163260;
        case 0x163264u: goto label_163264;
        case 0x163268u: goto label_163268;
        case 0x16326cu: goto label_16326c;
        case 0x163270u: goto label_163270;
        case 0x163274u: goto label_163274;
        case 0x163278u: goto label_163278;
        case 0x16327cu: goto label_16327c;
        case 0x163280u: goto label_163280;
        case 0x163284u: goto label_163284;
        case 0x163288u: goto label_163288;
        case 0x16328cu: goto label_16328c;
        case 0x163290u: goto label_163290;
        case 0x163294u: goto label_163294;
        case 0x163298u: goto label_163298;
        case 0x16329cu: goto label_16329c;
        case 0x1632a0u: goto label_1632a0;
        case 0x1632a4u: goto label_1632a4;
        case 0x1632a8u: goto label_1632a8;
        case 0x1632acu: goto label_1632ac;
        case 0x1632b0u: goto label_1632b0;
        case 0x1632b4u: goto label_1632b4;
        case 0x1632b8u: goto label_1632b8;
        case 0x1632bcu: goto label_1632bc;
        case 0x1632c0u: goto label_1632c0;
        case 0x1632c4u: goto label_1632c4;
        case 0x1632c8u: goto label_1632c8;
        case 0x1632ccu: goto label_1632cc;
        case 0x1632d0u: goto label_1632d0;
        case 0x1632d4u: goto label_1632d4;
        case 0x1632d8u: goto label_1632d8;
        case 0x1632dcu: goto label_1632dc;
        case 0x1632e0u: goto label_1632e0;
        case 0x1632e4u: goto label_1632e4;
        case 0x1632e8u: goto label_1632e8;
        case 0x1632ecu: goto label_1632ec;
        case 0x1632f0u: goto label_1632f0;
        case 0x1632f4u: goto label_1632f4;
        case 0x1632f8u: goto label_1632f8;
        case 0x1632fcu: goto label_1632fc;
        case 0x163300u: goto label_163300;
        case 0x163304u: goto label_163304;
        case 0x163308u: goto label_163308;
        case 0x16330cu: goto label_16330c;
        case 0x163310u: goto label_163310;
        case 0x163314u: goto label_163314;
        case 0x163318u: goto label_163318;
        case 0x16331cu: goto label_16331c;
        case 0x163320u: goto label_163320;
        case 0x163324u: goto label_163324;
        case 0x163328u: goto label_163328;
        case 0x16332cu: goto label_16332c;
        case 0x163330u: goto label_163330;
        case 0x163334u: goto label_163334;
        case 0x163338u: goto label_163338;
        case 0x16333cu: goto label_16333c;
        case 0x163340u: goto label_163340;
        case 0x163344u: goto label_163344;
        case 0x163348u: goto label_163348;
        case 0x16334cu: goto label_16334c;
        case 0x163350u: goto label_163350;
        case 0x163354u: goto label_163354;
        case 0x163358u: goto label_163358;
        case 0x16335cu: goto label_16335c;
        case 0x163360u: goto label_163360;
        case 0x163364u: goto label_163364;
        case 0x163368u: goto label_163368;
        case 0x16336cu: goto label_16336c;
        case 0x163370u: goto label_163370;
        case 0x163374u: goto label_163374;
        case 0x163378u: goto label_163378;
        case 0x16337cu: goto label_16337c;
        case 0x163380u: goto label_163380;
        case 0x163384u: goto label_163384;
        case 0x163388u: goto label_163388;
        case 0x16338cu: goto label_16338c;
        case 0x163390u: goto label_163390;
        case 0x163394u: goto label_163394;
        case 0x163398u: goto label_163398;
        case 0x16339cu: goto label_16339c;
        case 0x1633a0u: goto label_1633a0;
        case 0x1633a4u: goto label_1633a4;
        default: break;
    }

    ctx->pc = 0x163190u;

label_163190:
    // 0x163190: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x163190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_163194:
    // 0x163194: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x163194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_163198:
    // 0x163198: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x163198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_16319c:
    // 0x16319c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16319cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1631a0:
    // 0x1631a0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1631a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1631a4:
    // 0x1631a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1631a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1631a8:
    // 0x1631a8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1631a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1631ac:
    // 0x1631ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1631acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1631b0:
    // 0x1631b0: 0xc058720  jal         func_161C80
label_1631b4:
    if (ctx->pc == 0x1631B4u) {
        ctx->pc = 0x1631B4u;
            // 0x1631b4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1631B8u;
        goto label_1631b8;
    }
    ctx->pc = 0x1631B0u;
    SET_GPR_U32(ctx, 31, 0x1631B8u);
    ctx->pc = 0x1631B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1631B0u;
            // 0x1631b4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161C80u;
    if (runtime->hasFunction(0x161C80u)) {
        auto targetFn = runtime->lookupFunction(0x161C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1631B8u; }
        if (ctx->pc != 0x1631B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsAddMode__Fv_0x161c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1631B8u; }
        if (ctx->pc != 0x1631B8u) { return; }
    }
    ctx->pc = 0x1631B8u;
label_1631b8:
    // 0x1631b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1631bc:
    if (ctx->pc == 0x1631BCu) {
        ctx->pc = 0x1631BCu;
            // 0x1631bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1631C0u;
        goto label_1631c0;
    }
    ctx->pc = 0x1631B8u;
    {
        const bool branch_taken_0x1631b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1631BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1631B8u;
            // 0x1631bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1631b8) {
            ctx->pc = 0x1631C8u;
            goto label_1631c8;
        }
    }
    ctx->pc = 0x1631C0u;
label_1631c0:
    // 0x1631c0: 0x10000072  b           . + 4 + (0x72 << 2)
label_1631c4:
    if (ctx->pc == 0x1631C4u) {
        ctx->pc = 0x1631C4u;
            // 0x1631c4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x1631C8u;
        goto label_1631c8;
    }
    ctx->pc = 0x1631C0u;
    {
        const bool branch_taken_0x1631c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1631C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1631C0u;
            // 0x1631c4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1631c0) {
            ctx->pc = 0x16338Cu;
            goto label_16338c;
        }
    }
    ctx->pc = 0x1631C8u;
label_1631c8:
    // 0x1631c8: 0x8f858934  lw          $a1, -0x76CC($gp)
    ctx->pc = 0x1631c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936884)));
label_1631cc:
    // 0x1631cc: 0xc0572fc  jal         func_15CBF0
label_1631d0:
    if (ctx->pc == 0x1631D0u) {
        ctx->pc = 0x1631D0u;
            // 0x1631d0: 0x8f848914  lw          $a0, -0x76EC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
        ctx->pc = 0x1631D4u;
        goto label_1631d4;
    }
    ctx->pc = 0x1631CCu;
    SET_GPR_U32(ctx, 31, 0x1631D4u);
    ctx->pc = 0x1631D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1631CCu;
            // 0x1631d0: 0x8f848914  lw          $a0, -0x76EC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CBF0u;
    if (runtime->hasFunction(0x15CBF0u)) {
        auto targetFn = runtime->lookupFunction(0x15CBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1631D4u; }
        if (ctx->pc != 0x1631D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCameraInfo__4CMapFi_0x15cbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1631D4u; }
        if (ctx->pc != 0x1631D4u) { return; }
    }
    ctx->pc = 0x1631D4u;
label_1631d4:
    // 0x1631d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1631d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1631d8:
    // 0x1631d8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_1631dc:
    if (ctx->pc == 0x1631DCu) {
        ctx->pc = 0x1631DCu;
            // 0x1631dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1631E0u;
        goto label_1631e0;
    }
    ctx->pc = 0x1631D8u;
    {
        const bool branch_taken_0x1631d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1631DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1631D8u;
            // 0x1631dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1631d8) {
            ctx->pc = 0x1631E8u;
            goto label_1631e8;
        }
    }
    ctx->pc = 0x1631E0u;
label_1631e0:
    // 0x1631e0: 0x10000069  b           . + 4 + (0x69 << 2)
label_1631e4:
    if (ctx->pc == 0x1631E4u) {
        ctx->pc = 0x1631E4u;
            // 0x1631e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1631E8u;
        goto label_1631e8;
    }
    ctx->pc = 0x1631E0u;
    {
        const bool branch_taken_0x1631e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1631E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1631E0u;
            // 0x1631e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1631e0) {
            ctx->pc = 0x163388u;
            goto label_163388;
        }
    }
    ctx->pc = 0x1631E8u;
label_1631e8:
    // 0x1631e8: 0xc05191c  jal         func_146470
label_1631ec:
    if (ctx->pc == 0x1631ECu) {
        ctx->pc = 0x1631ECu;
            // 0x1631ec: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1631F0u;
        goto label_1631f0;
    }
    ctx->pc = 0x1631E8u;
    SET_GPR_U32(ctx, 31, 0x1631F0u);
    ctx->pc = 0x1631ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1631E8u;
            // 0x1631ec: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1631F0u; }
        if (ctx->pc != 0x1631F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1631F0u; }
        if (ctx->pc != 0x1631F0u) { return; }
    }
    ctx->pc = 0x1631F0u;
label_1631f0:
    // 0x1631f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1631f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1631f4:
    // 0x1631f4: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_1631f8:
    if (ctx->pc == 0x1631F8u) {
        ctx->pc = 0x1631F8u;
            // 0x1631f8: 0x24040120  addiu       $a0, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->pc = 0x1631FCu;
        goto label_1631fc;
    }
    ctx->pc = 0x1631F4u;
    {
        const bool branch_taken_0x1631f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1631F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1631F4u;
            // 0x1631f8: 0x24040120  addiu       $a0, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1631f4) {
            ctx->pc = 0x163204u;
            goto label_163204;
        }
    }
    ctx->pc = 0x1631FCu;
label_1631fc:
    // 0x1631fc: 0x10000062  b           . + 4 + (0x62 << 2)
label_163200:
    if (ctx->pc == 0x163200u) {
        ctx->pc = 0x163200u;
            // 0x163200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x163204u;
        goto label_163204;
    }
    ctx->pc = 0x1631FCu;
    {
        const bool branch_taken_0x1631fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1631FCu;
            // 0x163200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1631fc) {
            ctx->pc = 0x163388u;
            goto label_163388;
        }
    }
    ctx->pc = 0x163204u;
label_163204:
    // 0x163204: 0xc05878c  jal         func_161E30
label_163208:
    if (ctx->pc == 0x163208u) {
        ctx->pc = 0x16320Cu;
        goto label_16320c;
    }
    ctx->pc = 0x163204u;
    SET_GPR_U32(ctx, 31, 0x16320Cu);
    ctx->pc = 0x161E30u;
    if (runtime->hasFunction(0x161E30u)) {
        auto targetFn = runtime->lookupFunction(0x161E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16320Cu; }
        if (ctx->pc != 0x16320Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        algn16_size__FUi_0x161e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16320Cu; }
        if (ctx->pc != 0x16320Cu) { return; }
    }
    ctx->pc = 0x16320Cu;
label_16320c:
    // 0x16320c: 0x8f848920  lw          $a0, -0x76E0($gp)
    ctx->pc = 0x16320cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
label_163210:
    // 0x163210: 0xc04e748  jal         func_139D20
label_163214:
    if (ctx->pc == 0x163214u) {
        ctx->pc = 0x163214u;
            // 0x163214: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x163218u;
        goto label_163218;
    }
    ctx->pc = 0x163210u;
    SET_GPR_U32(ctx, 31, 0x163218u);
    ctx->pc = 0x163214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163210u;
            // 0x163214: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163218u; }
        if (ctx->pc != 0x163218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163218u; }
        if (ctx->pc != 0x163218u) { return; }
    }
    ctx->pc = 0x163218u;
label_163218:
    // 0x163218: 0x24040120  addiu       $a0, $zero, 0x120
    ctx->pc = 0x163218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
label_16321c:
    // 0x16321c: 0xc04e638  jal         func_1398E0
label_163220:
    if (ctx->pc == 0x163220u) {
        ctx->pc = 0x163220u;
            // 0x163220: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x163224u;
        goto label_163224;
    }
    ctx->pc = 0x16321Cu;
    SET_GPR_U32(ctx, 31, 0x163224u);
    ctx->pc = 0x163220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16321Cu;
            // 0x163220: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163224u; }
        if (ctx->pc != 0x163224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163224u; }
        if (ctx->pc != 0x163224u) { return; }
    }
    ctx->pc = 0x163224u;
label_163224:
    // 0x163224: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x163224u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163228:
    // 0x163228: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_16322c:
    if (ctx->pc == 0x16322Cu) {
        ctx->pc = 0x163230u;
        goto label_163230;
    }
    ctx->pc = 0x163228u;
    {
        const bool branch_taken_0x163228 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x163228) {
            ctx->pc = 0x16323Cu;
            goto label_16323c;
        }
    }
    ctx->pc = 0x163230u;
label_163230:
    // 0x163230: 0xc05206c  jal         func_1481B0
label_163234:
    if (ctx->pc == 0x163234u) {
        ctx->pc = 0x163234u;
            // 0x163234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x163238u;
        goto label_163238;
    }
    ctx->pc = 0x163230u;
    SET_GPR_U32(ctx, 31, 0x163238u);
    ctx->pc = 0x163234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163230u;
            // 0x163234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1481B0u;
    if (runtime->hasFunction(0x1481B0u)) {
        auto targetFn = runtime->lookupFunction(0x1481B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163238u; }
        if (ctx->pc != 0x163238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CColFrameFv_0x1481b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163238u; }
        if (ctx->pc != 0x163238u) { return; }
    }
    ctx->pc = 0x163238u;
label_163238:
    // 0x163238: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x163238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16323c:
    // 0x16323c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16323cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_163240:
    // 0x163240: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x163240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_163244:
    // 0x163244: 0x24a530b0  addiu       $a1, $a1, 0x30B0
    ctx->pc = 0x163244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12464));
label_163248:
    // 0x163248: 0xc04a38a  jal         func_128E28
label_16324c:
    if (ctx->pc == 0x16324Cu) {
        ctx->pc = 0x16324Cu;
            // 0x16324c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x163250u;
        goto label_163250;
    }
    ctx->pc = 0x163248u;
    SET_GPR_U32(ctx, 31, 0x163250u);
    ctx->pc = 0x16324Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163248u;
            // 0x16324c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163250u; }
        if (ctx->pc != 0x163250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163250u; }
        if (ctx->pc != 0x163250u) { return; }
    }
    ctx->pc = 0x163250u;
label_163250:
    // 0x163250: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
label_163254:
    if (ctx->pc == 0x163254u) {
        ctx->pc = 0x163254u;
            // 0x163254: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x163258u;
        goto label_163258;
    }
    ctx->pc = 0x163250u;
    {
        const bool branch_taken_0x163250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163250u;
            // 0x163254: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163250) {
            ctx->pc = 0x163348u;
            goto label_163348;
        }
    }
    ctx->pc = 0x163258u;
label_163258:
    // 0x163258: 0xc05878c  jal         func_161E30
label_16325c:
    if (ctx->pc == 0x16325Cu) {
        ctx->pc = 0x163260u;
        goto label_163260;
    }
    ctx->pc = 0x163258u;
    SET_GPR_U32(ctx, 31, 0x163260u);
    ctx->pc = 0x161E30u;
    if (runtime->hasFunction(0x161E30u)) {
        auto targetFn = runtime->lookupFunction(0x161E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163260u; }
        if (ctx->pc != 0x163260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        algn16_size__FUi_0x161e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163260u; }
        if (ctx->pc != 0x163260u) { return; }
    }
    ctx->pc = 0x163260u;
label_163260:
    // 0x163260: 0x8f848920  lw          $a0, -0x76E0($gp)
    ctx->pc = 0x163260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
label_163264:
    // 0x163264: 0xc04e748  jal         func_139D20
label_163268:
    if (ctx->pc == 0x163268u) {
        ctx->pc = 0x163268u;
            // 0x163268: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x16326Cu;
        goto label_16326c;
    }
    ctx->pc = 0x163264u;
    SET_GPR_U32(ctx, 31, 0x16326Cu);
    ctx->pc = 0x163268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163264u;
            // 0x163268: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16326Cu; }
        if (ctx->pc != 0x16326Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16326Cu; }
        if (ctx->pc != 0x16326Cu) { return; }
    }
    ctx->pc = 0x16326Cu;
label_16326c:
    // 0x16326c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x16326cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_163270:
    // 0x163270: 0xc04e638  jal         func_1398E0
label_163274:
    if (ctx->pc == 0x163274u) {
        ctx->pc = 0x163274u;
            // 0x163274: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x163278u;
        goto label_163278;
    }
    ctx->pc = 0x163270u;
    SET_GPR_U32(ctx, 31, 0x163278u);
    ctx->pc = 0x163274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163270u;
            // 0x163274: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163278u; }
        if (ctx->pc != 0x163278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163278u; }
        if (ctx->pc != 0x163278u) { return; }
    }
    ctx->pc = 0x163278u;
label_163278:
    // 0x163278: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x163278u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16327c:
    // 0x16327c: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_163280:
    if (ctx->pc == 0x163280u) {
        ctx->pc = 0x163280u;
            // 0x163280: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x163284u;
        goto label_163284;
    }
    ctx->pc = 0x16327Cu;
    {
        const bool branch_taken_0x16327c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x163280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16327Cu;
            // 0x163280: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16327c) {
            ctx->pc = 0x163294u;
            goto label_163294;
        }
    }
    ctx->pc = 0x163284u;
label_163284:
    // 0x163284: 0xc058cf0  jal         func_1633C0
label_163288:
    if (ctx->pc == 0x163288u) {
        ctx->pc = 0x163288u;
            // 0x163288: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16328Cu;
        goto label_16328c;
    }
    ctx->pc = 0x163284u;
    SET_GPR_U32(ctx, 31, 0x16328Cu);
    ctx->pc = 0x163288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163284u;
            // 0x163288: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1633C0u;
    if (runtime->hasFunction(0x1633C0u)) {
        auto targetFn = runtime->lookupFunction(0x1633C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16328Cu; }
        if (ctx->pc != 0x16328Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10CCollisionFv_0x1633c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16328Cu; }
        if (ctx->pc != 0x16328Cu) { return; }
    }
    ctx->pc = 0x16328Cu;
label_16328c:
    // 0x16328c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16328cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163290:
    // 0x163290: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x163290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_163294:
    // 0x163294: 0xc051928  jal         func_1464A0
label_163298:
    if (ctx->pc == 0x163298u) {
        ctx->pc = 0x163298u;
            // 0x163298: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16329Cu;
        goto label_16329c;
    }
    ctx->pc = 0x163294u;
    SET_GPR_U32(ctx, 31, 0x16329Cu);
    ctx->pc = 0x163298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163294u;
            // 0x163298: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16329Cu; }
        if (ctx->pc != 0x16329Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16329Cu; }
        if (ctx->pc != 0x16329Cu) { return; }
    }
    ctx->pc = 0x16329Cu;
label_16329c:
    // 0x16329c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16329cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1632a0:
    // 0x1632a0: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1632a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1632a4:
    // 0x1632a4: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x1632a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
label_1632a8:
    // 0x1632a8: 0xc051928  jal         func_1464A0
label_1632ac:
    if (ctx->pc == 0x1632ACu) {
        ctx->pc = 0x1632ACu;
            // 0x1632ac: 0x26850018  addiu       $a1, $s4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
        ctx->pc = 0x1632B0u;
        goto label_1632b0;
    }
    ctx->pc = 0x1632A8u;
    SET_GPR_U32(ctx, 31, 0x1632B0u);
    ctx->pc = 0x1632ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1632A8u;
            // 0x1632ac: 0x26850018  addiu       $a1, $s4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1632B0u; }
        if (ctx->pc != 0x1632B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1632B0u; }
        if (ctx->pc != 0x1632B0u) { return; }
    }
    ctx->pc = 0x1632B0u;
label_1632b0:
    // 0x1632b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1632b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1632b4:
    // 0x1632b4: 0x26940030  addiu       $s4, $s4, 0x30
    ctx->pc = 0x1632b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_1632b8:
    // 0x1632b8: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
label_1632bc:
    if (ctx->pc == 0x1632BCu) {
        ctx->pc = 0x1632BCu;
            // 0x1632bc: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->pc = 0x1632C0u;
        goto label_1632c0;
    }
    ctx->pc = 0x1632B8u;
    {
        const bool branch_taken_0x1632b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1632BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1632B8u;
            // 0x1632bc: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1632b8) {
            ctx->pc = 0x163348u;
            goto label_163348;
        }
    }
    ctx->pc = 0x1632C0u;
label_1632c0:
    // 0x1632c0: 0x2a620008  slti        $v0, $s3, 0x8
    ctx->pc = 0x1632c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
label_1632c4:
    // 0x1632c4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1632c8:
    if (ctx->pc == 0x1632C8u) {
        ctx->pc = 0x1632C8u;
            // 0x1632c8: 0x2a62000b  slti        $v0, $s3, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)11) ? 1 : 0);
        ctx->pc = 0x1632CCu;
        goto label_1632cc;
    }
    ctx->pc = 0x1632C4u;
    {
        const bool branch_taken_0x1632c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1632C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1632C4u;
            // 0x1632c8: 0x2a62000b  slti        $v0, $s3, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1632c4) {
            ctx->pc = 0x1632F4u;
            goto label_1632f4;
        }
    }
    ctx->pc = 0x1632CCu;
label_1632cc:
    // 0x1632cc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1632ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1632d0:
    // 0x1632d0: 0xc051928  jal         func_1464A0
label_1632d4:
    if (ctx->pc == 0x1632D4u) {
        ctx->pc = 0x1632D4u;
            // 0x1632d4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1632D8u;
        goto label_1632d8;
    }
    ctx->pc = 0x1632D0u;
    SET_GPR_U32(ctx, 31, 0x1632D8u);
    ctx->pc = 0x1632D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1632D0u;
            // 0x1632d4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1632D8u; }
        if (ctx->pc != 0x1632D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1632D8u; }
        if (ctx->pc != 0x1632D8u) { return; }
    }
    ctx->pc = 0x1632D8u;
label_1632d8:
    // 0x1632d8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1632d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1632dc:
    // 0x1632dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1632dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1632e0:
    // 0x1632e0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1632e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1632e4:
    // 0x1632e4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1632e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1632e8:
    // 0x1632e8: 0x320f809  jalr        $t9
label_1632ec:
    if (ctx->pc == 0x1632ECu) {
        ctx->pc = 0x1632ECu;
            // 0x1632ec: 0x26940018  addiu       $s4, $s4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
        ctx->pc = 0x1632F0u;
        goto label_1632f0;
    }
    ctx->pc = 0x1632E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1632F0u);
        ctx->pc = 0x1632ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1632E8u;
            // 0x1632ec: 0x26940018  addiu       $s4, $s4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1632F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1632F0u; }
            if (ctx->pc != 0x1632F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1632F0u;
label_1632f0:
    // 0x1632f0: 0x2a62000b  slti        $v0, $s3, 0xB
    ctx->pc = 0x1632f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)11) ? 1 : 0);
label_1632f4:
    // 0x1632f4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1632f8:
    if (ctx->pc == 0x1632F8u) {
        ctx->pc = 0x1632F8u;
            // 0x1632f8: 0x2a62000e  slti        $v0, $s3, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)14) ? 1 : 0);
        ctx->pc = 0x1632FCu;
        goto label_1632fc;
    }
    ctx->pc = 0x1632F4u;
    {
        const bool branch_taken_0x1632f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1632F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1632F4u;
            // 0x1632f8: 0x2a62000e  slti        $v0, $s3, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)14) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1632f4) {
            ctx->pc = 0x163324u;
            goto label_163324;
        }
    }
    ctx->pc = 0x1632FCu;
label_1632fc:
    // 0x1632fc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1632fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_163300:
    // 0x163300: 0xc051928  jal         func_1464A0
label_163304:
    if (ctx->pc == 0x163304u) {
        ctx->pc = 0x163304u;
            // 0x163304: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x163308u;
        goto label_163308;
    }
    ctx->pc = 0x163300u;
    SET_GPR_U32(ctx, 31, 0x163308u);
    ctx->pc = 0x163304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163300u;
            // 0x163304: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163308u; }
        if (ctx->pc != 0x163308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163308u; }
        if (ctx->pc != 0x163308u) { return; }
    }
    ctx->pc = 0x163308u;
label_163308:
    // 0x163308: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x163308u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16330c:
    // 0x16330c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16330cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_163310:
    // 0x163310: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x163310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_163314:
    // 0x163314: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x163314u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_163318:
    // 0x163318: 0x320f809  jalr        $t9
label_16331c:
    if (ctx->pc == 0x16331Cu) {
        ctx->pc = 0x16331Cu;
            // 0x16331c: 0x26940018  addiu       $s4, $s4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
        ctx->pc = 0x163320u;
        goto label_163320;
    }
    ctx->pc = 0x163318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x163320u);
        ctx->pc = 0x16331Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163318u;
            // 0x16331c: 0x26940018  addiu       $s4, $s4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x163320u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x163320u; }
            if (ctx->pc != 0x163320u) { return; }
        }
        }
    }
    ctx->pc = 0x163320u;
label_163320:
    // 0x163320: 0x2a62000e  slti        $v0, $s3, 0xE
    ctx->pc = 0x163320u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)14) ? 1 : 0);
label_163324:
    // 0x163324: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_163328:
    if (ctx->pc == 0x163328u) {
        ctx->pc = 0x163328u;
            // 0x163328: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16332Cu;
        goto label_16332c;
    }
    ctx->pc = 0x163324u;
    {
        const bool branch_taken_0x163324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163324u;
            // 0x163328: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163324) {
            ctx->pc = 0x163348u;
            goto label_163348;
        }
    }
    ctx->pc = 0x16332Cu;
label_16332c:
    // 0x16332c: 0xc051928  jal         func_1464A0
label_163330:
    if (ctx->pc == 0x163330u) {
        ctx->pc = 0x163330u;
            // 0x163330: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x163334u;
        goto label_163334;
    }
    ctx->pc = 0x16332Cu;
    SET_GPR_U32(ctx, 31, 0x163334u);
    ctx->pc = 0x163330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16332Cu;
            // 0x163330: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163334u; }
        if (ctx->pc != 0x163334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163334u; }
        if (ctx->pc != 0x163334u) { return; }
    }
    ctx->pc = 0x163334u;
label_163334:
    // 0x163334: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x163334u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_163338:
    // 0x163338: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x163338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16333c:
    // 0x16333c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x16333cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_163340:
    // 0x163340: 0x320f809  jalr        $t9
label_163344:
    if (ctx->pc == 0x163344u) {
        ctx->pc = 0x163344u;
            // 0x163344: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x163348u;
        goto label_163348;
    }
    ctx->pc = 0x163340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x163348u);
        ctx->pc = 0x163344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163340u;
            // 0x163344: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x163348u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x163348u; }
            if (ctx->pc != 0x163348u) { return; }
        }
        }
    }
    ctx->pc = 0x163348u;
label_163348:
    // 0x163348: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_16334c:
    if (ctx->pc == 0x16334Cu) {
        ctx->pc = 0x16334Cu;
            // 0x16334c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x163350u;
        goto label_163350;
    }
    ctx->pc = 0x163348u;
    {
        const bool branch_taken_0x163348 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16334Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163348u;
            // 0x16334c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163348) {
            ctx->pc = 0x163358u;
            goto label_163358;
        }
    }
    ctx->pc = 0x163350u;
label_163350:
    // 0x163350: 0xc058cec  jal         func_1633B0
label_163354:
    if (ctx->pc == 0x163354u) {
        ctx->pc = 0x163354u;
            // 0x163354: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x163358u;
        goto label_163358;
    }
    ctx->pc = 0x163350u;
    SET_GPR_U32(ctx, 31, 0x163358u);
    ctx->pc = 0x163354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163350u;
            // 0x163354: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1633B0u;
    if (runtime->hasFunction(0x1633B0u)) {
        auto targetFn = runtime->lookupFunction(0x1633B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163358u; }
        if (ctx->pc != 0x163358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCollision__9CColFrameFP10CCollision_0x1633b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163358u; }
        if (ctx->pc != 0x163358u) { return; }
    }
    ctx->pc = 0x163358u;
label_163358:
    // 0x163358: 0x8f838938  lw          $v1, -0x76C8($gp)
    ctx->pc = 0x163358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936888)));
label_16335c:
    // 0x16335c: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x16335cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_163360:
    // 0x163360: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x163360u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_163364:
    // 0x163364: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_163368:
    if (ctx->pc == 0x163368u) {
        ctx->pc = 0x163368u;
            // 0x163368: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16336Cu;
        goto label_16336c;
    }
    ctx->pc = 0x163364u;
    {
        const bool branch_taken_0x163364 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x163368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163364u;
            // 0x163368: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163364) {
            ctx->pc = 0x163388u;
            goto label_163388;
        }
    }
    ctx->pc = 0x16336Cu;
label_16336c:
    // 0x16336c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16336cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_163370:
    // 0x163370: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x163370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_163374:
    // 0x163374: 0xac510094  sw          $s1, 0x94($v0)
    ctx->pc = 0x163374u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 17));
label_163378:
    // 0x163378: 0x8f828938  lw          $v0, -0x76C8($gp)
    ctx->pc = 0x163378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936888)));
label_16337c:
    // 0x16337c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16337cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_163380:
    // 0x163380: 0xaf828938  sw          $v0, -0x76C8($gp)
    ctx->pc = 0x163380u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936888), GPR_U32(ctx, 2));
label_163384:
    // 0x163384: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_163388:
    // 0x163388: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x163388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_16338c:
    // 0x16338c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16338cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_163390:
    // 0x163390: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x163390u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_163394:
    // 0x163394: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x163394u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_163398:
    // 0x163398: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x163398u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16339c:
    // 0x16339c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16339cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1633a0:
    // 0x1633a0: 0x3e00008  jr          $ra
label_1633a4:
    if (ctx->pc == 0x1633A4u) {
        ctx->pc = 0x1633A4u;
            // 0x1633a4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1633A8u;
        goto label_fallthrough_0x1633a0;
    }
    ctx->pc = 0x1633A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1633A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1633A0u;
            // 0x1633a4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1633a0:
    ctx->pc = 0x1633A8u;
}
