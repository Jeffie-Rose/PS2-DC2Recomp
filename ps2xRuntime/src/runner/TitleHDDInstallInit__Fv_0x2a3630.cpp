#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TitleHDDInstallInit__Fv
// Address: 0x2a3630 - 0x2a3a74
void TitleHDDInstallInit__Fv_0x2a3630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TitleHDDInstallInit__Fv_0x2a3630");
#endif

    switch (ctx->pc) {
        case 0x2a3688u: goto label_2a3688;
        case 0x2a3694u: goto label_2a3694;
        case 0x2a36a0u: goto label_2a36a0;
        case 0x2a36a8u: goto label_2a36a8;
        case 0x2a36d8u: goto label_2a36d8;
        case 0x2a36f0u: goto label_2a36f0;
        case 0x2a3710u: goto label_2a3710;
        case 0x2a3738u: goto label_2a3738;
        case 0x2a3750u: goto label_2a3750;
        case 0x2a3770u: goto label_2a3770;
        case 0x2a3778u: goto label_2a3778;
        case 0x2a3794u: goto label_2a3794;
        case 0x2a37b0u: goto label_2a37b0;
        case 0x2a37c0u: goto label_2a37c0;
        case 0x2a3804u: goto label_2a3804;
        case 0x2a3838u: goto label_2a3838;
        case 0x2a3858u: goto label_2a3858;
        case 0x2a3878u: goto label_2a3878;
        case 0x2a388cu: goto label_2a388c;
        case 0x2a389cu: goto label_2a389c;
        case 0x2a38a8u: goto label_2a38a8;
        case 0x2a38b8u: goto label_2a38b8;
        case 0x2a38c8u: goto label_2a38c8;
        case 0x2a38d4u: goto label_2a38d4;
        case 0x2a38e4u: goto label_2a38e4;
        case 0x2a3904u: goto label_2a3904;
        case 0x2a392cu: goto label_2a392c;
        case 0x2a3940u: goto label_2a3940;
        case 0x2a3950u: goto label_2a3950;
        case 0x2a3960u: goto label_2a3960;
        case 0x2a3968u: goto label_2a3968;
        case 0x2a3978u: goto label_2a3978;
        case 0x2a399cu: goto label_2a399c;
        case 0x2a39acu: goto label_2a39ac;
        case 0x2a39b8u: goto label_2a39b8;
        case 0x2a39c4u: goto label_2a39c4;
        case 0x2a3a08u: goto label_2a3a08;
        case 0x2a3a10u: goto label_2a3a10;
        case 0x2a3a20u: goto label_2a3a20;
        case 0x2a3a2cu: goto label_2a3a2c;
        case 0x2a3a48u: goto label_2a3a48;
        case 0x2a3a58u: goto label_2a3a58;
        default: break;
    }

    ctx->pc = 0x2a3630u;

    // 0x2a3630: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2a3630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2a3634: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a3634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a3638: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a3638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a363c: 0x2405004a  addiu       $a1, $zero, 0x4A
    ctx->pc = 0x2a363cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x2a3640: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a3640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a3644: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a3644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a3648: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a3648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a364c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a364cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a3650: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x2a3650u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x2a3654: 0x26311ef0  addiu       $s1, $s1, 0x1EF0
    ctx->pc = 0x2a3654u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7920));
    // 0x2a3658: 0xac206124  sw          $zero, 0x6124($at)
    ctx->pc = 0x2a3658u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 24868), GPR_U32(ctx, 0));
    // 0x2a365c: 0x3c1001f0  lui         $s0, 0x1F0
    ctx->pc = 0x2a365cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)496 << 16));
    // 0x2a3660: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a3660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a3664: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3668: 0xa7809a14  sh          $zero, -0x65EC($gp)
    ctx->pc = 0x2a3668u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941204), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a366c: 0xa3809a20  sb          $zero, -0x65E0($gp)
    ctx->pc = 0x2a366cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941216), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a3670: 0x26106100  addiu       $s0, $s0, 0x6100
    ctx->pc = 0x2a3670u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24832));
    // 0x2a3674: 0xa7809a0c  sh          $zero, -0x65F4($gp)
    ctx->pc = 0x2a3674u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941196), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a3678: 0xa7809a10  sh          $zero, -0x65F0($gp)
    ctx->pc = 0x2a3678u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941200), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a367c: 0xa7809a38  sh          $zero, -0x65C8($gp)
    ctx->pc = 0x2a367cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941240), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a3680: 0xc04b950  jal         func_12E540
    ctx->pc = 0x2A3680u;
    SET_GPR_U32(ctx, 31, 0x2A3688u);
    ctx->pc = 0x2A3684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3680u;
            // 0x2a3684: 0xac20611c  sw          $zero, 0x611C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 24860), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3688u; }
        if (ctx->pc != 0x2A3688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3688u; }
        if (ctx->pc != 0x2A3688u) { return; }
    }
    ctx->pc = 0x2A3688u;
label_2a3688:
    // 0x2a3688: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a368c: 0xc04b950  jal         func_12E540
    ctx->pc = 0x2A368Cu;
    SET_GPR_U32(ctx, 31, 0x2A3694u);
    ctx->pc = 0x2A3690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A368Cu;
            // 0x2a3690: 0x2405004b  addiu       $a1, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3694u; }
        if (ctx->pc != 0x2A3694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3694u; }
        if (ctx->pc != 0x2A3694u) { return; }
    }
    ctx->pc = 0x2A3694u;
label_2a3694:
    // 0x2a3694: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3698: 0xc04b950  jal         func_12E540
    ctx->pc = 0x2A3698u;
    SET_GPR_U32(ctx, 31, 0x2A36A0u);
    ctx->pc = 0x2A369Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3698u;
            // 0x2a369c: 0x2405004c  addiu       $a1, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A36A0u; }
        if (ctx->pc != 0x2A36A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A36A0u; }
        if (ctx->pc != 0x2A36A0u) { return; }
    }
    ctx->pc = 0x2A36A0u;
label_2a36a0:
    // 0x2a36a0: 0xc04e780  jal         func_139E00
    ctx->pc = 0x2A36A0u;
    SET_GPR_U32(ctx, 31, 0x2A36A8u);
    ctx->pc = 0x2A36A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A36A0u;
            // 0x2a36a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A36A8u; }
        if (ctx->pc != 0x2A36A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A36A8u; }
        if (ctx->pc != 0x2A36A8u) { return; }
    }
    ctx->pc = 0x2A36A8u;
label_2a36a8:
    // 0x2a36a8: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a36a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a36ac: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2a36acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2a36b0: 0x8c236124  lw          $v1, 0x6124($at)
    ctx->pc = 0x2a36b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24868)));
    // 0x2a36b4: 0x2484e250  addiu       $a0, $a0, -0x1DB0
    ctx->pc = 0x2a36b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959696));
    // 0x2a36b8: 0x27a600bc  addiu       $a2, $sp, 0xBC
    ctx->pc = 0x2a36b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x2a36bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a36bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a36c0: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a36c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a36c4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a36c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a36c8: 0x8c226120  lw          $v0, 0x6120($at)
    ctx->pc = 0x2a36c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24864)));
    // 0x2a36cc: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x2a36ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a36d0: 0xc0524dc  jal         func_149370
    ctx->pc = 0x2A36D0u;
    SET_GPR_U32(ctx, 31, 0x2A36D8u);
    ctx->pc = 0x2A36D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A36D0u;
            // 0x2a36d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A36D8u; }
        if (ctx->pc != 0x2A36D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A36D8u; }
        if (ctx->pc != 0x2A36D8u) { return; }
    }
    ctx->pc = 0x2A36D8u;
label_2a36d8:
    // 0x2a36d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a36d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a36dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a36dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a36e0: 0x2406004a  addiu       $a2, $zero, 0x4A
    ctx->pc = 0x2a36e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x2a36e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a36e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a36e8: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x2A36E8u;
    SET_GPR_U32(ctx, 31, 0x2A36F0u);
    ctx->pc = 0x2A36ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A36E8u;
            // 0x2a36ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A36F0u; }
        if (ctx->pc != 0x2A36F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A36F0u; }
        if (ctx->pc != 0x2A36F0u) { return; }
    }
    ctx->pc = 0x2A36F0u;
label_2a36f0:
    // 0x2a36f0: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x2a36f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2a36f4: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2a36f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2a36f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A36F8u;
    {
        const bool branch_taken_0x2a36f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A36FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A36F8u;
            // 0x2a36fc: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a36f8) {
            ctx->pc = 0x2A3708u;
            goto label_2a3708;
        }
    }
    ctx->pc = 0x2A3700u;
    // 0x2a3700: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2a3700u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2a3704: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2a3704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a3708:
    // 0x2a3708: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2A3708u;
    SET_GPR_U32(ctx, 31, 0x2A3710u);
    ctx->pc = 0x2A370Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3708u;
            // 0x2a370c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3710u; }
        if (ctx->pc != 0x2A3710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3710u; }
        if (ctx->pc != 0x2A3710u) { return; }
    }
    ctx->pc = 0x2A3710u;
label_2a3710:
    // 0x2a3710: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x2a3710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2a3714: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2a3714u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2a3718: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2a3718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a371c: 0x2484e260  addiu       $a0, $a0, -0x1DA0
    ctx->pc = 0x2a371cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959712));
    // 0x2a3720: 0x27a600bc  addiu       $a2, $sp, 0xBC
    ctx->pc = 0x2a3720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x2a3724: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a3724u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3728: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a3728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a372c: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x2a372cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a3730: 0xc0524dc  jal         func_149370
    ctx->pc = 0x2A3730u;
    SET_GPR_U32(ctx, 31, 0x2A3738u);
    ctx->pc = 0x2A3734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3730u;
            // 0x2a3734: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3738u; }
        if (ctx->pc != 0x2A3738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3738u; }
        if (ctx->pc != 0x2A3738u) { return; }
    }
    ctx->pc = 0x2A3738u;
label_2a3738:
    // 0x2a3738: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a3738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a373c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a373cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3740: 0x2406004b  addiu       $a2, $zero, 0x4B
    ctx->pc = 0x2a3740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x2a3744: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a3744u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3748: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x2A3748u;
    SET_GPR_U32(ctx, 31, 0x2A3750u);
    ctx->pc = 0x2A374Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3748u;
            // 0x2a374c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3750u; }
        if (ctx->pc != 0x2A3750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3750u; }
        if (ctx->pc != 0x2A3750u) { return; }
    }
    ctx->pc = 0x2A3750u;
label_2a3750:
    // 0x2a3750: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x2a3750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2a3754: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2a3754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2a3758: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3758u;
    {
        const bool branch_taken_0x2a3758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A375Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3758u;
            // 0x2a375c: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3758) {
            ctx->pc = 0x2A3768u;
            goto label_2a3768;
        }
    }
    ctx->pc = 0x2A3760u;
    // 0x2a3760: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2a3760u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2a3764: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2a3764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a3768:
    // 0x2a3768: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2A3768u;
    SET_GPR_U32(ctx, 31, 0x2A3770u);
    ctx->pc = 0x2A376Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3768u;
            // 0x2a376c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3770u; }
        if (ctx->pc != 0x2A3770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3770u; }
        if (ctx->pc != 0x2A3770u) { return; }
    }
    ctx->pc = 0x2A3770u;
label_2a3770:
    // 0x2a3770: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a3770u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3774: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a3774u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a3778:
    // 0x2a3778: 0x26460001  addiu       $a2, $s2, 0x1
    ctx->pc = 0x2a3778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2a377c: 0x28c2000a  slti        $v0, $a2, 0xA
    ctx->pc = 0x2a377cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2a3780: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A3780u;
    {
        const bool branch_taken_0x2a3780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3780u;
            // 0x2a3784: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3780) {
            ctx->pc = 0x2A379Cu;
            goto label_2a379c;
        }
    }
    ctx->pc = 0x2A3788u;
    // 0x2a3788: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2a3788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a378c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2A378Cu;
    SET_GPR_U32(ctx, 31, 0x2A3794u);
    ctx->pc = 0x2A3790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A378Cu;
            // 0x2a3790: 0x24a5e270  addiu       $a1, $a1, -0x1D90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3794u; }
        if (ctx->pc != 0x2A3794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3794u; }
        if (ctx->pc != 0x2A3794u) { return; }
    }
    ctx->pc = 0x2A3794u;
label_2a3794:
    // 0x2a3794: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A3794u;
    {
        const bool branch_taken_0x2a3794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3794) {
            ctx->pc = 0x2A37B0u;
            goto label_2a37b0;
        }
    }
    ctx->pc = 0x2A379Cu;
label_2a379c:
    // 0x2a379c: 0x0  nop
    ctx->pc = 0x2a379cu;
    // NOP
    // 0x2a37a0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2a37a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2a37a4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2a37a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a37a8: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2A37A8u;
    SET_GPR_U32(ctx, 31, 0x2A37B0u);
    ctx->pc = 0x2A37ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A37A8u;
            // 0x2a37ac: 0x24a5e280  addiu       $a1, $a1, -0x1D80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A37B0u; }
        if (ctx->pc != 0x2A37B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A37B0u; }
        if (ctx->pc != 0x2A37B0u) { return; }
    }
    ctx->pc = 0x2A37B0u;
label_2a37b0:
    // 0x2a37b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a37b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a37b4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2a37b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a37b8: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2A37B8u;
    SET_GPR_U32(ctx, 31, 0x2A37C0u);
    ctx->pc = 0x2A37BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A37B8u;
            // 0x2a37bc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A37C0u; }
        if (ctx->pc != 0x2A37C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A37C0u; }
        if (ctx->pc != 0x2A37C0u) { return; }
    }
    ctx->pc = 0x2A37C0u;
label_2a37c0:
    // 0x2a37c0: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x2a37c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x2a37c4: 0x3c0301f0  lui         $v1, 0x1F0
    ctx->pc = 0x2a37c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)496 << 16));
    // 0x2a37c8: 0x24846270  addiu       $a0, $a0, 0x6270
    ctx->pc = 0x2a37c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25200));
    // 0x2a37cc: 0x246362a0  addiu       $v1, $v1, 0x62A0
    ctx->pc = 0x2a37ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25248));
    // 0x2a37d0: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x2a37d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2a37d4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2a37d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2a37d8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2a37d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2a37dc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a37dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2a37e0: 0x2a42000a  slti        $v0, $s2, 0xA
    ctx->pc = 0x2a37e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2a37e4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2a37e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2a37e8: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2A37E8u;
    {
        const bool branch_taken_0x2a37e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A37ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A37E8u;
            // 0x2a37ec: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a37e8) {
            ctx->pc = 0x2A3778u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a3778;
        }
    }
    ctx->pc = 0x2A37F0u;
    // 0x2a37f0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2a37f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2a37f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a37f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a37f8: 0x24a5e290  addiu       $a1, $a1, -0x1D70
    ctx->pc = 0x2a37f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959760));
    // 0x2a37fc: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2A37FCu;
    SET_GPR_U32(ctx, 31, 0x2A3804u);
    ctx->pc = 0x2A3800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A37FCu;
            // 0x2a3800: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3804u; }
        if (ctx->pc != 0x2A3804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3804u; }
        if (ctx->pc != 0x2A3804u) { return; }
    }
    ctx->pc = 0x2A3804u;
label_2a3804:
    // 0x2a3804: 0xaf829a1c  sw          $v0, -0x65E4($gp)
    ctx->pc = 0x2a3804u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941212), GPR_U32(ctx, 2));
    // 0x2a3808: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2a3808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2a380c: 0x8f8299c8  lw          $v0, -0x6638($gp)
    ctx->pc = 0x2a380cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941128)));
    // 0x2a3810: 0x2484e298  addiu       $a0, $a0, -0x1D68
    ctx->pc = 0x2a3810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959768));
    // 0x2a3814: 0x27a600bc  addiu       $a2, $sp, 0xBC
    ctx->pc = 0x2a3814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x2a3818: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a3818u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a381c: 0xaf829a34  sw          $v0, -0x65CC($gp)
    ctx->pc = 0x2a381cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941236), GPR_U32(ctx, 2));
    // 0x2a3820: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x2a3820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2a3824: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2a3824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a3828: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a3828u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a382c: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x2a382cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a3830: 0xc0524dc  jal         func_149370
    ctx->pc = 0x2A3830u;
    SET_GPR_U32(ctx, 31, 0x2A3838u);
    ctx->pc = 0x2A3834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3830u;
            // 0x2a3834: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3838u; }
        if (ctx->pc != 0x2A3838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3838u; }
        if (ctx->pc != 0x2A3838u) { return; }
    }
    ctx->pc = 0x2A3838u;
label_2a3838:
    // 0x2a3838: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2A3838u;
    {
        const bool branch_taken_0x2a3838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3838) {
            ctx->pc = 0x2A3878u;
            goto label_2a3878;
        }
    }
    ctx->pc = 0x2A3840u;
    // 0x2a3840: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a3840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3844: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3848: 0x2406004c  addiu       $a2, $zero, 0x4C
    ctx->pc = 0x2a3848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2a384c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a384cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3850: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x2A3850u;
    SET_GPR_U32(ctx, 31, 0x2A3858u);
    ctx->pc = 0x2A3854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3850u;
            // 0x2a3854: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3858u; }
        if (ctx->pc != 0x2A3858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3858u; }
        if (ctx->pc != 0x2A3858u) { return; }
    }
    ctx->pc = 0x2A3858u;
label_2a3858:
    // 0x2a3858: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x2a3858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2a385c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2a385cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2a3860: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3860u;
    {
        const bool branch_taken_0x2a3860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3860u;
            // 0x2a3864: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3860) {
            ctx->pc = 0x2A3870u;
            goto label_2a3870;
        }
    }
    ctx->pc = 0x2A3868u;
    // 0x2a3868: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2a3868u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2a386c: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2a386cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a3870:
    // 0x2a3870: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2A3870u;
    SET_GPR_U32(ctx, 31, 0x2A3878u);
    ctx->pc = 0x2A3874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3870u;
            // 0x2a3874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3878u; }
        if (ctx->pc != 0x2A3878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3878u; }
        if (ctx->pc != 0x2A3878u) { return; }
    }
    ctx->pc = 0x2A3878u;
label_2a3878:
    // 0x2a3878: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2a3878u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2a387c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a387cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3880: 0x24a5e2a8  addiu       $a1, $a1, -0x1D58
    ctx->pc = 0x2a3880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959784));
    // 0x2a3884: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2A3884u;
    SET_GPR_U32(ctx, 31, 0x2A388Cu);
    ctx->pc = 0x2A3888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3884u;
            // 0x2a3888: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A388Cu; }
        if (ctx->pc != 0x2A388Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A388Cu; }
        if (ctx->pc != 0x2A388Cu) { return; }
    }
    ctx->pc = 0x2A388Cu;
label_2a388c:
    // 0x2a388c: 0xaf829a30  sw          $v0, -0x65D0($gp)
    ctx->pc = 0x2a388cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941232), GPR_U32(ctx, 2));
    // 0x2a3890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3894: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2A3894u;
    SET_GPR_U32(ctx, 31, 0x2A389Cu);
    ctx->pc = 0x2A3898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3894u;
            // 0x2a3898: 0x2405022f  addiu       $a1, $zero, 0x22F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 559));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A389Cu; }
        if (ctx->pc != 0x2A389Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A389Cu; }
        if (ctx->pc != 0x2A389Cu) { return; }
    }
    ctx->pc = 0x2A389Cu;
label_2a389c:
    // 0x2a389c: 0x240422d0  addiu       $a0, $zero, 0x22D0
    ctx->pc = 0x2a389cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8912));
    // 0x2a38a0: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x2A38A0u;
    SET_GPR_U32(ctx, 31, 0x2A38A8u);
    ctx->pc = 0x2A38A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A38A0u;
            // 0x2a38a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A38A8u; }
        if (ctx->pc != 0x2A38A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A38A8u; }
        if (ctx->pc != 0x2A38A8u) { return; }
    }
    ctx->pc = 0x2A38A8u;
label_2a38a8:
    // 0x2a38a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A38A8u;
    {
        const bool branch_taken_0x2a38a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A38ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A38A8u;
            // 0x2a38ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a38a8) {
            ctx->pc = 0x2A38B8u;
            goto label_2a38b8;
        }
    }
    ctx->pc = 0x2A38B0u;
    // 0x2a38b0: 0xc0874b4  jal         func_21D2D0
    ctx->pc = 0x2A38B0u;
    SET_GPR_U32(ctx, 31, 0x2A38B8u);
    ctx->pc = 0x21D2D0u;
    if (runtime->hasFunction(0x21D2D0u)) {
        auto targetFn = runtime->lookupFunction(0x21D2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A38B8u; }
        if (ctx->pc != 0x2A38B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__7CDC2MesFv_0x21d2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A38B8u; }
        if (ctx->pc != 0x2A38B8u) { return; }
    }
    ctx->pc = 0x2A38B8u;
label_2a38b8:
    // 0x2a38b8: 0xaf829a28  sw          $v0, -0x65D8($gp)
    ctx->pc = 0x2a38b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941224), GPR_U32(ctx, 2));
    // 0x2a38bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a38bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a38c0: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2A38C0u;
    SET_GPR_U32(ctx, 31, 0x2A38C8u);
    ctx->pc = 0x2A38C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A38C0u;
            // 0x2a38c4: 0x2405022f  addiu       $a1, $zero, 0x22F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 559));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A38C8u; }
        if (ctx->pc != 0x2A38C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A38C8u; }
        if (ctx->pc != 0x2A38C8u) { return; }
    }
    ctx->pc = 0x2A38C8u;
label_2a38c8:
    // 0x2a38c8: 0x240422d0  addiu       $a0, $zero, 0x22D0
    ctx->pc = 0x2a38c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8912));
    // 0x2a38cc: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x2A38CCu;
    SET_GPR_U32(ctx, 31, 0x2A38D4u);
    ctx->pc = 0x2A38D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A38CCu;
            // 0x2a38d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A38D4u; }
        if (ctx->pc != 0x2A38D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A38D4u; }
        if (ctx->pc != 0x2A38D4u) { return; }
    }
    ctx->pc = 0x2A38D4u;
label_2a38d4:
    // 0x2a38d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A38D4u;
    {
        const bool branch_taken_0x2a38d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A38D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A38D4u;
            // 0x2a38d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a38d4) {
            ctx->pc = 0x2A38E4u;
            goto label_2a38e4;
        }
    }
    ctx->pc = 0x2A38DCu;
    // 0x2a38dc: 0xc0874b4  jal         func_21D2D0
    ctx->pc = 0x2A38DCu;
    SET_GPR_U32(ctx, 31, 0x2A38E4u);
    ctx->pc = 0x21D2D0u;
    if (runtime->hasFunction(0x21D2D0u)) {
        auto targetFn = runtime->lookupFunction(0x21D2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A38E4u; }
        if (ctx->pc != 0x2A38E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__7CDC2MesFv_0x21d2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A38E4u; }
        if (ctx->pc != 0x2A38E4u) { return; }
    }
    ctx->pc = 0x2A38E4u;
label_2a38e4:
    // 0x2a38e4: 0xaf829a2c  sw          $v0, -0x65D4($gp)
    ctx->pc = 0x2a38e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941228), GPR_U32(ctx, 2));
    // 0x2a38e8: 0x24030046  addiu       $v1, $zero, 0x46
    ctx->pc = 0x2a38e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2a38ec: 0x8f829a28  lw          $v0, -0x65D8($gp)
    ctx->pc = 0x2a38ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a38f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a38f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a38f4: 0xac431b2c  sw          $v1, 0x1B2C($v0)
    ctx->pc = 0x2a38f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6956), GPR_U32(ctx, 3));
    // 0x2a38f8: 0x8f829a2c  lw          $v0, -0x65D4($gp)
    ctx->pc = 0x2a38f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941228)));
    // 0x2a38fc: 0xc04e780  jal         func_139E00
    ctx->pc = 0x2A38FCu;
    SET_GPR_U32(ctx, 31, 0x2A3904u);
    ctx->pc = 0x2A3900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A38FCu;
            // 0x2a3900: 0xac431b2c  sw          $v1, 0x1B2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 6956), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3904u; }
        if (ctx->pc != 0x2A3904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3904u; }
        if (ctx->pc != 0x2A3904u) { return; }
    }
    ctx->pc = 0x2A3904u;
label_2a3904:
    // 0x2a3904: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x2a3904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2a3908: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2a3908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2a390c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2a390cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a3910: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a3910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a3914: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x2a3914u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2a3918: 0x24a5e2b0  addiu       $a1, $a1, -0x1D50
    ctx->pc = 0x2a3918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959792));
    // 0x2a391c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a391cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a3920: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a3920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a3924: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2A3924u;
    SET_GPR_U32(ctx, 31, 0x2A392Cu);
    ctx->pc = 0x2A3928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3924u;
            // 0x2a3928: 0xaf829a24  sw          $v0, -0x65DC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A392Cu; }
        if (ctx->pc != 0x2A392Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A392Cu; }
        if (ctx->pc != 0x2A392Cu) { return; }
    }
    ctx->pc = 0x2A392Cu;
label_2a392c:
    // 0x2a392c: 0x8f859a24  lw          $a1, -0x65DC($gp)
    ctx->pc = 0x2a392cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941220)));
    // 0x2a3930: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a3930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a3934: 0x27a600bc  addiu       $a2, $sp, 0xBC
    ctx->pc = 0x2a3934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x2a3938: 0xc0524dc  jal         func_149370
    ctx->pc = 0x2A3938u;
    SET_GPR_U32(ctx, 31, 0x2A3940u);
    ctx->pc = 0x2A393Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3938u;
            // 0x2a393c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3940u; }
        if (ctx->pc != 0x2A3940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3940u; }
        if (ctx->pc != 0x2A3940u) { return; }
    }
    ctx->pc = 0x2A3940u;
label_2a3940:
    // 0x2a3940: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A3940u;
    {
        const bool branch_taken_0x2a3940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3940) {
            ctx->pc = 0x2A399Cu;
            goto label_2a399c;
        }
    }
    ctx->pc = 0x2A3948u;
    // 0x2a3948: 0xc065a18  jal         func_196860
    ctx->pc = 0x2A3948u;
    SET_GPR_U32(ctx, 31, 0x2A3950u);
    ctx->pc = 0x196860u;
    if (runtime->hasFunction(0x196860u)) {
        auto targetFn = runtime->lookupFunction(0x196860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3950u; }
        if (ctx->pc != 0x2A3950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMesBuffer__Fv_0x196860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3950u; }
        if (ctx->pc != 0x2A3950u) { return; }
    }
    ctx->pc = 0x2A3950u;
label_2a3950:
    // 0x2a3950: 0x8f849a28  lw          $a0, -0x65D8($gp)
    ctx->pc = 0x2a3950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941224)));
    // 0x2a3954: 0x8f869a24  lw          $a2, -0x65DC($gp)
    ctx->pc = 0x2a3954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941220)));
    // 0x2a3958: 0xc0874d8  jal         func_21D360
    ctx->pc = 0x2A3958u;
    SET_GPR_U32(ctx, 31, 0x2A3960u);
    ctx->pc = 0x2A395Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3958u;
            // 0x2a395c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D360u;
    if (runtime->hasFunction(0x21D360u)) {
        auto targetFn = runtime->lookupFunction(0x21D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3960u; }
        if (ctx->pc != 0x2A3960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMessData__7CDC2MesFPsPs_0x21d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3960u; }
        if (ctx->pc != 0x2A3960u) { return; }
    }
    ctx->pc = 0x2A3960u;
label_2a3960:
    // 0x2a3960: 0xc065a18  jal         func_196860
    ctx->pc = 0x2A3960u;
    SET_GPR_U32(ctx, 31, 0x2A3968u);
    ctx->pc = 0x196860u;
    if (runtime->hasFunction(0x196860u)) {
        auto targetFn = runtime->lookupFunction(0x196860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3968u; }
        if (ctx->pc != 0x2A3968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMesBuffer__Fv_0x196860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3968u; }
        if (ctx->pc != 0x2A3968u) { return; }
    }
    ctx->pc = 0x2A3968u;
label_2a3968:
    // 0x2a3968: 0x8f849a2c  lw          $a0, -0x65D4($gp)
    ctx->pc = 0x2a3968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941228)));
    // 0x2a396c: 0x8f869a24  lw          $a2, -0x65DC($gp)
    ctx->pc = 0x2a396cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941220)));
    // 0x2a3970: 0xc0874d8  jal         func_21D360
    ctx->pc = 0x2A3970u;
    SET_GPR_U32(ctx, 31, 0x2A3978u);
    ctx->pc = 0x2A3974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3970u;
            // 0x2a3974: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D360u;
    if (runtime->hasFunction(0x21D360u)) {
        auto targetFn = runtime->lookupFunction(0x21D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3978u; }
        if (ctx->pc != 0x2A3978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMessData__7CDC2MesFPsPs_0x21d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3978u; }
        if (ctx->pc != 0x2A3978u) { return; }
    }
    ctx->pc = 0x2A3978u;
label_2a3978:
    // 0x2a3978: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x2a3978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2a397c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x2a397cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a3980: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2a3980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2a3984: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3984u;
    {
        const bool branch_taken_0x2a3984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3984u;
            // 0x2a3988: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3984) {
            ctx->pc = 0x2A3994u;
            goto label_2a3994;
        }
    }
    ctx->pc = 0x2A398Cu;
    // 0x2a398c: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2a398cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2a3990: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2a3990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a3994:
    // 0x2a3994: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2A3994u;
    SET_GPR_U32(ctx, 31, 0x2A399Cu);
    ctx->pc = 0x2A3998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3994u;
            // 0x2a3998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A399Cu; }
        if (ctx->pc != 0x2A399Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A399Cu; }
        if (ctx->pc != 0x2A399Cu) { return; }
    }
    ctx->pc = 0x2A399Cu;
label_2a399c:
    // 0x2a399c: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x2a399cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x2a39a0: 0xa3809a18  sb          $zero, -0x65E8($gp)
    ctx->pc = 0x2a39a0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941208), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a39a4: 0xc0c6e90  jal         func_31BA40
    ctx->pc = 0x2A39A4u;
    SET_GPR_U32(ctx, 31, 0x2A39ACu);
    ctx->pc = 0x2A39A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A39A4u;
            // 0x2a39a8: 0x248462d4  addiu       $a0, $a0, 0x62D4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25300));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31BA40u;
    if (runtime->hasFunction(0x31BA40u)) {
        auto targetFn = runtime->lookupFunction(0x31BA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A39ACu; }
        if (ctx->pc != 0x2A39ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        HddConectCheck__FPi_0x31ba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A39ACu; }
        if (ctx->pc != 0x2A39ACu) { return; }
    }
    ctx->pc = 0x2A39ACu;
label_2a39ac:
    // 0x2a39ac: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a39acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a39b0: 0xc0a9340  jal         func_2A4D00
    ctx->pc = 0x2A39B0u;
    SET_GPR_U32(ctx, 31, 0x2A39B8u);
    ctx->pc = 0x2A39B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A39B0u;
            // 0x2a39b4: 0xac2262d0  sw          $v0, 0x62D0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 25296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4D00u;
    if (runtime->hasFunction(0x2A4D00u)) {
        auto targetFn = runtime->lookupFunction(0x2A4D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A39B8u; }
        if (ctx->pc != 0x2A39B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckAppInstallForTitle__Fv_0x2a4d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A39B8u; }
        if (ctx->pc != 0x2A39B8u) { return; }
    }
    ctx->pc = 0x2A39B8u;
label_2a39b8:
    // 0x2a39b8: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a39b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a39bc: 0xc0c6f98  jal         func_31BE60
    ctx->pc = 0x2A39BCu;
    SET_GPR_U32(ctx, 31, 0x2A39C4u);
    ctx->pc = 0x2A39C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A39BCu;
            // 0x2a39c0: 0xac2262d8  sw          $v0, 0x62D8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 25304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31BE60u;
    if (runtime->hasFunction(0x31BE60u)) {
        auto targetFn = runtime->lookupFunction(0x31BE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A39C4u; }
        if (ctx->pc != 0x2A39C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckInstallSpace__Fv_0x31be60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A39C4u; }
        if (ctx->pc != 0x2A39C4u) { return; }
    }
    ctx->pc = 0x2A39C4u;
label_2a39c4:
    // 0x2a39c4: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a39c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a39c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a39c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a39cc: 0xac2262dc  sw          $v0, 0x62DC($at)
    ctx->pc = 0x2a39ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 25308), GPR_U32(ctx, 2));
    // 0x2a39d0: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x2a39d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
    // 0x2a39d4: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a39d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a39d8: 0xac2062e0  sw          $zero, 0x62E0($at)
    ctx->pc = 0x2a39d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 25312), GPR_U32(ctx, 0));
    // 0x2a39dc: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a39dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a39e0: 0xac2062e4  sw          $zero, 0x62E4($at)
    ctx->pc = 0x2a39e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 25316), GPR_U32(ctx, 0));
    // 0x2a39e4: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a39e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a39e8: 0xac2062e8  sw          $zero, 0x62E8($at)
    ctx->pc = 0x2a39e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 25320), GPR_U32(ctx, 0));
    // 0x2a39ec: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x2a39ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2a39f0: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2a39f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2a39f4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2a39f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a39f8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a39f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a39fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a39fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a3a00: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2A3A00u;
    SET_GPR_U32(ctx, 31, 0x2A3A08u);
    ctx->pc = 0x2A3A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3A00u;
            // 0x2a3a04: 0xac2262f0  sw          $v0, 0x62F0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 25328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3A08u; }
        if (ctx->pc != 0x2A3A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3A08u; }
        if (ctx->pc != 0x2A3A08u) { return; }
    }
    ctx->pc = 0x2A3A08u;
label_2a3a08:
    // 0x2a3a08: 0xc04e780  jal         func_139E00
    ctx->pc = 0x2A3A08u;
    SET_GPR_U32(ctx, 31, 0x2A3A10u);
    ctx->pc = 0x2A3A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3A08u;
            // 0x2a3a0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3A10u; }
        if (ctx->pc != 0x2A3A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3A10u; }
        if (ctx->pc != 0x2A3A10u) { return; }
    }
    ctx->pc = 0x2A3A10u;
label_2a3a10:
    // 0x2a3a10: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x2a3a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
    // 0x2a3a14: 0x8f8499ec  lw          $a0, -0x6614($gp)
    ctx->pc = 0x2a3a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a3a18: 0xc0a9944  jal         func_2A6510
    ctx->pc = 0x2A3A18u;
    SET_GPR_U32(ctx, 31, 0x2A3A20u);
    ctx->pc = 0x2A3A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3A18u;
            // 0x2a3a1c: 0x24450088  addiu       $a1, $v0, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6510u;
    if (runtime->hasFunction(0x2A6510u)) {
        auto targetFn = runtime->lookupFunction(0x2A6510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3A20u; }
        if (ctx->pc != 0x2A3A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmStatus__6CSceneFPQ26CScene10BGM_STATUS_0x2a6510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3A20u; }
        if (ctx->pc != 0x2A3A20u) { return; }
    }
    ctx->pc = 0x2A3A20u;
label_2a3a20:
    // 0x2a3a20: 0x8f8499ec  lw          $a0, -0x6614($gp)
    ctx->pc = 0x2a3a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a3a24: 0xc0a98a0  jal         func_2A6280
    ctx->pc = 0x2A3A24u;
    SET_GPR_U32(ctx, 31, 0x2A3A2Cu);
    ctx->pc = 0x2A3A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3A24u;
            // 0x2a3a28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6280u;
    if (runtime->hasFunction(0x2A6280u)) {
        auto targetFn = runtime->lookupFunction(0x2A6280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3A2Cu; }
        if (ctx->pc != 0x2A3A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopBGM__6CSceneFi_0x2a6280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3A2Cu; }
        if (ctx->pc != 0x2A3A2Cu) { return; }
    }
    ctx->pc = 0x2A3A2Cu;
label_2a3a2c:
    // 0x2a3a2c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x2a3a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2a3a30: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x2a3a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2a3a34: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2a3a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a3a38: 0x8f8499ec  lw          $a0, -0x6614($gp)
    ctx->pc = 0x2a3a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a3a3c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a3a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a3a40: 0xc0a9be4  jal         func_2A6F90
    ctx->pc = 0x2A3A40u;
    SET_GPR_U32(ctx, 31, 0x2A3A48u);
    ctx->pc = 0x2A3A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3A40u;
            // 0x2a3a44: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6F90u;
    if (runtime->hasFunction(0x2A6F90u)) {
        auto targetFn = runtime->lookupFunction(0x2A6F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3A48u; }
        if (ctx->pc != 0x2A3A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadBGM__6CSceneFiP1_0x2a6f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3A48u; }
        if (ctx->pc != 0x2A3A48u) { return; }
    }
    ctx->pc = 0x2A3A48u;
label_2a3a48:
    // 0x2a3a48: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x2a3a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
    // 0x2a3a4c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2a3a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2a3a50: 0xc05f5fc  jal         func_17D7F0
    ctx->pc = 0x2A3A50u;
    SET_GPR_U32(ctx, 31, 0x2A3A58u);
    ctx->pc = 0x2A3A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3A50u;
            // 0x2a3a54: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D7F0u;
    if (runtime->hasFunction(0x17D7F0u)) {
        auto targetFn = runtime->lookupFunction(0x17D7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3A58u; }
        if (ctx->pc != 0x2A3A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeIn__10CFadeInOutFi_0x17d7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3A58u; }
        if (ctx->pc != 0x2A3A58u) { return; }
    }
    ctx->pc = 0x2A3A58u;
label_2a3a58:
    // 0x2a3a58: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a3a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a3a5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a3a5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a3a60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a3a60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3a64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a3a64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3a68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a3a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3A6Cu;
            // 0x2a3a70: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A3A74u;
}
