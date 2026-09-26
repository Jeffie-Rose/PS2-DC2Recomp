#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NowLoadingLoop__Fv
// Address: 0x309480 - 0x3097d8
void NowLoadingLoop__Fv_0x309480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NowLoadingLoop__Fv_0x309480");
#endif

    switch (ctx->pc) {
        case 0x3094b0u: goto label_3094b0;
        case 0x3094b4u: goto label_3094b4;
        case 0x3094d4u: goto label_3094d4;
        case 0x3094f0u: goto label_3094f0;
        case 0x3094f8u: goto label_3094f8;
        case 0x309510u: goto label_309510;
        case 0x30952cu: goto label_30952c;
        case 0x309538u: goto label_309538;
        case 0x309548u: goto label_309548;
        case 0x309554u: goto label_309554;
        case 0x309560u: goto label_309560;
        case 0x30956cu: goto label_30956c;
        case 0x309578u: goto label_309578;
        case 0x309584u: goto label_309584;
        case 0x309590u: goto label_309590;
        case 0x30959cu: goto label_30959c;
        case 0x3095d0u: goto label_3095d0;
        case 0x3095ecu: goto label_3095ec;
        case 0x309604u: goto label_309604;
        case 0x30961cu: goto label_30961c;
        case 0x30963cu: goto label_30963c;
        case 0x309658u: goto label_309658;
        case 0x309660u: goto label_309660;
        case 0x30966cu: goto label_30966c;
        case 0x309678u: goto label_309678;
        case 0x309684u: goto label_309684;
        case 0x309690u: goto label_309690;
        case 0x3096a8u: goto label_3096a8;
        case 0x3096b4u: goto label_3096b4;
        case 0x3096c8u: goto label_3096c8;
        case 0x3096dcu: goto label_3096dc;
        case 0x3096f4u: goto label_3096f4;
        case 0x309720u: goto label_309720;
        case 0x309728u: goto label_309728;
        case 0x309758u: goto label_309758;
        case 0x309760u: goto label_309760;
        case 0x309768u: goto label_309768;
        case 0x30979cu: goto label_30979c;
        case 0x3097b0u: goto label_3097b0;
        case 0x3097d0u: goto label_3097d0;
        default: break;
    }

    ctx->pc = 0x309480u;

    // 0x309480: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x309480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x309484: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x309484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309488: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x309488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x30948c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x30948cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x309490: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x309490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x309494: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x309494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309498: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x309498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x30949c: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x30949cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3094a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3094a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3094a4: 0x240800c0  addiu       $t0, $zero, 0xC0
    ctx->pc = 0x3094a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x3094a8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x3094A8u;
    SET_GPR_U32(ctx, 31, 0x3094B0u);
    ctx->pc = 0x3094ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3094A8u;
            // 0x3094ac: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3094B0u; }
        if (ctx->pc != 0x3094B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3094B0u; }
        if (ctx->pc != 0x3094B0u) { return; }
    }
    ctx->pc = 0x3094B0u;
label_3094b0:
    // 0x3094b0: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x3094b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_3094b4:
    // 0x3094b4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3094B4u;
    {
        const bool branch_taken_0x3094b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3094B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3094B4u;
            // 0x3094b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3094b4) {
            ctx->pc = 0x3094C4u;
            goto label_3094c4;
        }
    }
    ctx->pc = 0x3094BCu;
    // 0x3094bc: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x3094BCu;
    {
        const bool branch_taken_0x3094bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3094C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3094BCu;
            // 0x3094c0: 0xaf8285f4  sw          $v0, -0x7A0C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936052), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3094bc) {
            ctx->pc = 0x3097C8u;
            goto label_3097c8;
        }
    }
    ctx->pc = 0x3094C4u;
label_3094c4:
    // 0x3094c4: 0x0  nop
    ctx->pc = 0x3094c4u;
    // NOP
    // 0x3094c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3094c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3094cc: 0x146200ba  bne         $v1, $v0, . + 4 + (0xBA << 2)
    ctx->pc = 0x3094CCu;
    {
        const bool branch_taken_0x3094cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3094cc) {
            ctx->pc = 0x3097B8u;
            goto label_3097b8;
        }
    }
    ctx->pc = 0x3094D4u;
label_3094d4:
    // 0x3094d4: 0x0  nop
    ctx->pc = 0x3094d4u;
    // NOP
    // 0x3094d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3094d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3094dc: 0x0  nop
    ctx->pc = 0x3094dcu;
    // NOP
    // 0x3094e0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3094e0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x3094e4: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x3094e4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x3094e8: 0xc050da0  jal         func_143680
    ctx->pc = 0x3094E8u;
    SET_GPR_U32(ctx, 31, 0x3094F0u);
    ctx->pc = 0x3094ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3094E8u;
            // 0x3094ec: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x143680u;
    if (runtime->hasFunction(0x143680u)) {
        auto targetFn = runtime->lookupFunction(0x143680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3094F0u; }
        if (ctx->pc != 0x3094F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetBackGround__Fffff_0x143680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3094F0u; }
        if (ctx->pc != 0x3094F0u) { return; }
    }
    ctx->pc = 0x3094F0u;
label_3094f0:
    // 0x3094f0: 0xc050878  jal         func_1421E0
    ctx->pc = 0x3094F0u;
    SET_GPR_U32(ctx, 31, 0x3094F8u);
    ctx->pc = 0x3094F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3094F0u;
            // 0x3094f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1421E0u;
    if (runtime->hasFunction(0x1421E0u)) {
        auto targetFn = runtime->lookupFunction(0x1421E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3094F8u; }
        if (ctx->pc != 0x3094F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgBeginFrame__FP14mgCDrawManager_0x1421e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3094F8u; }
        if (ctx->pc != 0x3094F8u) { return; }
    }
    ctx->pc = 0x3094F8u;
label_3094f8:
    // 0x3094f8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3094f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x3094fc: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x3094fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x309500: 0x8c25b480  lw          $a1, -0x4B80($at)
    ctx->pc = 0x309500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947968)));
    // 0x309504: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x309504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x309508: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x309508u;
    SET_GPR_U32(ctx, 31, 0x309510u);
    ctx->pc = 0x30950Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309508u;
            // 0x30950c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309510u; }
        if (ctx->pc != 0x309510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309510u; }
        if (ctx->pc != 0x309510u) { return; }
    }
    ctx->pc = 0x309510u;
label_309510:
    // 0x309510: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x309510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x309514: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x309514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x309518: 0x8c26b480  lw          $a2, -0x4B80($at)
    ctx->pc = 0x309518u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947968)));
    // 0x30951c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x30951cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x309520: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x309520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x309524: 0xc04b414  jal         func_12D050
    ctx->pc = 0x309524u;
    SET_GPR_U32(ctx, 31, 0x30952Cu);
    ctx->pc = 0x309528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309524u;
            // 0x309528: 0x24a52458  addiu       $a1, $a1, 0x2458 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30952Cu; }
        if (ctx->pc != 0x30952Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30952Cu; }
        if (ctx->pc != 0x30952Cu) { return; }
    }
    ctx->pc = 0x30952Cu;
label_30952c:
    // 0x30952c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30952cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309530: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x309530u;
    SET_GPR_U32(ctx, 31, 0x309538u);
    ctx->pc = 0x309534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309530u;
            // 0x309534: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309538u; }
        if (ctx->pc != 0x309538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309538u; }
        if (ctx->pc != 0x309538u) { return; }
    }
    ctx->pc = 0x309538u;
label_309538:
    // 0x309538: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x309538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x30953c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30953cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309540: 0xc04d104  jal         func_134410
    ctx->pc = 0x309540u;
    SET_GPR_U32(ctx, 31, 0x309548u);
    ctx->pc = 0x309544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309540u;
            // 0x309544: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309548u; }
        if (ctx->pc != 0x309548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309548u; }
        if (ctx->pc != 0x309548u) { return; }
    }
    ctx->pc = 0x309548u;
label_309548:
    // 0x309548: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x309548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x30954c: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x30954Cu;
    SET_GPR_U32(ctx, 31, 0x309554u);
    ctx->pc = 0x309550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30954Cu;
            // 0x309550: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309554u; }
        if (ctx->pc != 0x309554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309554u; }
        if (ctx->pc != 0x309554u) { return; }
    }
    ctx->pc = 0x309554u;
label_309554:
    // 0x309554: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x309554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x309558: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x309558u;
    SET_GPR_U32(ctx, 31, 0x309560u);
    ctx->pc = 0x30955Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309558u;
            // 0x30955c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309560u; }
        if (ctx->pc != 0x309560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309560u; }
        if (ctx->pc != 0x309560u) { return; }
    }
    ctx->pc = 0x309560u;
label_309560:
    // 0x309560: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x309560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x309564: 0xc04d424  jal         func_135090
    ctx->pc = 0x309564u;
    SET_GPR_U32(ctx, 31, 0x30956Cu);
    ctx->pc = 0x309568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309564u;
            // 0x309568: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30956Cu; }
        if (ctx->pc != 0x30956Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30956Cu; }
        if (ctx->pc != 0x30956Cu) { return; }
    }
    ctx->pc = 0x30956Cu;
label_30956c:
    // 0x30956c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x30956cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x309570: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x309570u;
    SET_GPR_U32(ctx, 31, 0x309578u);
    ctx->pc = 0x309574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309570u;
            // 0x309574: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309578u; }
        if (ctx->pc != 0x309578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309578u; }
        if (ctx->pc != 0x309578u) { return; }
    }
    ctx->pc = 0x309578u;
label_309578:
    // 0x309578: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x309578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x30957c: 0xc04d434  jal         func_1350D0
    ctx->pc = 0x30957Cu;
    SET_GPR_U32(ctx, 31, 0x309584u);
    ctx->pc = 0x309580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30957Cu;
            // 0x309580: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350D0u;
    if (runtime->hasFunction(0x1350D0u)) {
        auto targetFn = runtime->lookupFunction(0x1350D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309584u; }
        if (ctx->pc != 0x309584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Shading__11mgCDrawPrimFi_0x1350d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309584u; }
        if (ctx->pc != 0x309584u) { return; }
    }
    ctx->pc = 0x309584u;
label_309584:
    // 0x309584: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x309584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x309588: 0xc04d43c  jal         func_1350F0
    ctx->pc = 0x309588u;
    SET_GPR_U32(ctx, 31, 0x309590u);
    ctx->pc = 0x30958Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309588u;
            // 0x30958c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350F0u;
    if (runtime->hasFunction(0x1350F0u)) {
        auto targetFn = runtime->lookupFunction(0x1350F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309590u; }
        if (ctx->pc != 0x309590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AntiAliasing__11mgCDrawPrimFi_0x1350f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309590u; }
        if (ctx->pc != 0x309590u) { return; }
    }
    ctx->pc = 0x309590u;
label_309590:
    // 0x309590: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x309590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x309594: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x309594u;
    SET_GPR_U32(ctx, 31, 0x30959Cu);
    ctx->pc = 0x309598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309594u;
            // 0x309598: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30959Cu; }
        if (ctx->pc != 0x30959Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30959Cu; }
        if (ctx->pc != 0x30959Cu) { return; }
    }
    ctx->pc = 0x30959Cu;
label_30959c:
    // 0x30959c: 0xc780a18c  lwc1        $f0, -0x5E74($gp)
    ctx->pc = 0x30959cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3095a0: 0x3c02431d  lui         $v0, 0x431D
    ctx->pc = 0x3095a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17181 << 16));
    // 0x3095a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3095a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3095a8: 0x3c0342b6  lui         $v1, 0x42B6
    ctx->pc = 0x3095a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17078 << 16));
    // 0x3095ac: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3095acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3095b0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3095b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3095b4: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x3095b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3095b8: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x3095b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3095bc: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x3095bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3095c0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3095c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3095c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3095c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3095c8: 0xc04d320  jal         func_134C80
    ctx->pc = 0x3095C8u;
    SET_GPR_U32(ctx, 31, 0x3095D0u);
    ctx->pc = 0x3095CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3095C8u;
            // 0x3095cc: 0x46001500  add.s       $f20, $f2, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3095D0u; }
        if (ctx->pc != 0x3095D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3095D0u; }
        if (ctx->pc != 0x3095D0u) { return; }
    }
    ctx->pc = 0x3095D0u;
label_3095d0:
    // 0x3095d0: 0x3c0242b6  lui         $v0, 0x42B6
    ctx->pc = 0x3095d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17078 << 16));
    // 0x3095d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3095d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3095d8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3095d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3095dc: 0x3c0243c2  lui         $v0, 0x43C2
    ctx->pc = 0x3095dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17346 << 16));
    // 0x3095e0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3095e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3095e4: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x3095E4u;
    SET_GPR_U32(ctx, 31, 0x3095ECu);
    ctx->pc = 0x3095E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3095E4u;
            // 0x3095e8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3095ECu; }
        if (ctx->pc != 0x3095ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3095ECu; }
        if (ctx->pc != 0x3095ECu) { return; }
    }
    ctx->pc = 0x3095ECu;
label_3095ec:
    // 0x3095ec: 0x3c0243c2  lui         $v0, 0x43C2
    ctx->pc = 0x3095ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17346 << 16));
    // 0x3095f0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3095f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3095f4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3095f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3095f8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3095f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3095fc: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x3095FCu;
    SET_GPR_U32(ctx, 31, 0x309604u);
    ctx->pc = 0x309600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3095FCu;
            // 0x309600: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309604u; }
        if (ctx->pc != 0x309604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309604u; }
        if (ctx->pc != 0x309604u) { return; }
    }
    ctx->pc = 0x309604u;
label_309604:
    // 0x309604: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x309604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x309608: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x309608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30960c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x30960cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x309610: 0x24070032  addiu       $a3, $zero, 0x32
    ctx->pc = 0x309610u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x309614: 0xc04d320  jal         func_134C80
    ctx->pc = 0x309614u;
    SET_GPR_U32(ctx, 31, 0x30961Cu);
    ctx->pc = 0x309618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309614u;
            // 0x309618: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30961Cu; }
        if (ctx->pc != 0x30961Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30961Cu; }
        if (ctx->pc != 0x30961Cu) { return; }
    }
    ctx->pc = 0x30961Cu;
label_30961c:
    // 0x30961c: 0x3c0242b6  lui         $v0, 0x42B6
    ctx->pc = 0x30961cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17078 << 16));
    // 0x309620: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x309620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x309624: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x309624u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x309628: 0x3c0243c4  lui         $v0, 0x43C4
    ctx->pc = 0x309628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17348 << 16));
    // 0x30962c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x30962cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x309630: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x309630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x309634: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x309634u;
    SET_GPR_U32(ctx, 31, 0x30963Cu);
    ctx->pc = 0x309638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309634u;
            // 0x309638: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30963Cu; }
        if (ctx->pc != 0x30963Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30963Cu; }
        if (ctx->pc != 0x30963Cu) { return; }
    }
    ctx->pc = 0x30963Cu;
label_30963c:
    // 0x30963c: 0x3c0243c4  lui         $v0, 0x43C4
    ctx->pc = 0x30963cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17348 << 16));
    // 0x309640: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x309640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x309644: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x309644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x309648: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x309648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30964c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x30964cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x309650: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x309650u;
    SET_GPR_U32(ctx, 31, 0x309658u);
    ctx->pc = 0x309654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309650u;
            // 0x309654: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309658u; }
        if (ctx->pc != 0x309658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309658u; }
        if (ctx->pc != 0x309658u) { return; }
    }
    ctx->pc = 0x309658u;
label_309658:
    // 0x309658: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x309658u;
    SET_GPR_U32(ctx, 31, 0x309660u);
    ctx->pc = 0x30965Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309658u;
            // 0x30965c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309660u; }
        if (ctx->pc != 0x309660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309660u; }
        if (ctx->pc != 0x309660u) { return; }
    }
    ctx->pc = 0x309660u;
label_309660:
    // 0x309660: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x309660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x309664: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x309664u;
    SET_GPR_U32(ctx, 31, 0x30966Cu);
    ctx->pc = 0x309668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309664u;
            // 0x309668: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30966Cu; }
        if (ctx->pc != 0x30966Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30966Cu; }
        if (ctx->pc != 0x30966Cu) { return; }
    }
    ctx->pc = 0x30966Cu;
label_30966c:
    // 0x30966c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x30966cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x309670: 0xc04d43c  jal         func_1350F0
    ctx->pc = 0x309670u;
    SET_GPR_U32(ctx, 31, 0x309678u);
    ctx->pc = 0x309674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309670u;
            // 0x309674: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350F0u;
    if (runtime->hasFunction(0x1350F0u)) {
        auto targetFn = runtime->lookupFunction(0x1350F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309678u; }
        if (ctx->pc != 0x309678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AntiAliasing__11mgCDrawPrimFi_0x1350f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309678u; }
        if (ctx->pc != 0x309678u) { return; }
    }
    ctx->pc = 0x309678u;
label_309678:
    // 0x309678: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x309678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x30967c: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x30967Cu;
    SET_GPR_U32(ctx, 31, 0x309684u);
    ctx->pc = 0x309680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30967Cu;
            // 0x309680: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309684u; }
        if (ctx->pc != 0x309684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309684u; }
        if (ctx->pc != 0x309684u) { return; }
    }
    ctx->pc = 0x309684u;
label_309684:
    // 0x309684: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x309684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x309688: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x309688u;
    SET_GPR_U32(ctx, 31, 0x309690u);
    ctx->pc = 0x30968Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309688u;
            // 0x30968c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309690u; }
        if (ctx->pc != 0x309690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309690u; }
        if (ctx->pc != 0x309690u) { return; }
    }
    ctx->pc = 0x309690u;
label_309690:
    // 0x309690: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x309690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x309694: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x309694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x309698: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x309698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30969c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x30969cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3096a0: 0xc04d320  jal         func_134C80
    ctx->pc = 0x3096A0u;
    SET_GPR_U32(ctx, 31, 0x3096A8u);
    ctx->pc = 0x3096A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3096A0u;
            // 0x3096a4: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3096A8u; }
        if (ctx->pc != 0x3096A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3096A8u; }
        if (ctx->pc != 0x3096A8u) { return; }
    }
    ctx->pc = 0x3096A8u;
label_3096a8:
    // 0x3096a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3096a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3096ac: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x3096ACu;
    SET_GPR_U32(ctx, 31, 0x3096B4u);
    ctx->pc = 0x3096B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3096ACu;
            // 0x3096b0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3096B4u; }
        if (ctx->pc != 0x3096B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3096B4u; }
        if (ctx->pc != 0x3096B4u) { return; }
    }
    ctx->pc = 0x3096B4u;
label_3096b4:
    // 0x3096b4: 0x27b10054  addiu       $s1, $sp, 0x54
    ctx->pc = 0x3096b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x3096b8: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x3096b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3096bc: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x3096bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3096c0: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x3096C0u;
    SET_GPR_U32(ctx, 31, 0x3096C8u);
    ctx->pc = 0x3096C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3096C0u;
            // 0x3096c4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3096C8u; }
        if (ctx->pc != 0x3096C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3096C8u; }
        if (ctx->pc != 0x3096C8u) { return; }
    }
    ctx->pc = 0x3096C8u;
label_3096c8:
    // 0x3096c8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3096c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3096cc: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x3096ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x3096d0: 0x240600e6  addiu       $a2, $zero, 0xE6
    ctx->pc = 0x3096d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    // 0x3096d4: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x3096D4u;
    SET_GPR_U32(ctx, 31, 0x3096DCu);
    ctx->pc = 0x3096D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3096D4u;
            // 0x3096d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3096DCu; }
        if (ctx->pc != 0x3096DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3096DCu; }
        if (ctx->pc != 0x3096DCu) { return; }
    }
    ctx->pc = 0x3096DCu;
label_3096dc:
    // 0x3096dc: 0x27b20058  addiu       $s2, $sp, 0x58
    ctx->pc = 0x3096dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x3096e0: 0x27b0005c  addiu       $s0, $sp, 0x5C
    ctx->pc = 0x3096e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x3096e4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3096e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3096e8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3096e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3096ec: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x3096ECu;
    SET_GPR_U32(ctx, 31, 0x3096F4u);
    ctx->pc = 0x3096F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3096ECu;
            // 0x3096f0: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3096F4u; }
        if (ctx->pc != 0x3096F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3096F4u; }
        if (ctx->pc != 0x3096F4u) { return; }
    }
    ctx->pc = 0x3096F4u;
label_3096f4:
    // 0x3096f4: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x3096f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3096f8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3096f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3096fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3096fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x309700: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x309700u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309704: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x309704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x309708: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x309708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30970c: 0x24c80032  addiu       $t0, $a2, 0x32
    ctx->pc = 0x30970cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 50));
    // 0x309710: 0x246300e6  addiu       $v1, $v1, 0xE6
    ctx->pc = 0x309710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 230));
    // 0x309714: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x309714u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x309718: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x309718u;
    SET_GPR_U32(ctx, 31, 0x309720u);
    ctx->pc = 0x30971Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309718u;
            // 0x30971c: 0x1052823  subu        $a1, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309720u; }
        if (ctx->pc != 0x309720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309720u; }
        if (ctx->pc != 0x309720u) { return; }
    }
    ctx->pc = 0x309720u;
label_309720:
    // 0x309720: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x309720u;
    SET_GPR_U32(ctx, 31, 0x309728u);
    ctx->pc = 0x309724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309720u;
            // 0x309724: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309728u; }
        if (ctx->pc != 0x309728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309728u; }
        if (ctx->pc != 0x309728u) { return; }
    }
    ctx->pc = 0x309728u;
label_309728:
    // 0x309728: 0xc781a18c  lwc1        $f1, -0x5E74($gp)
    ctx->pc = 0x309728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30972c: 0xc780a190  lwc1        $f0, -0x5E70($gp)
    ctx->pc = 0x30972cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309730: 0xc782a194  lwc1        $f2, -0x5E6C($gp)
    ctx->pc = 0x309730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x309734: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x309734u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x309738: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x309738u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30973c: 0x0  nop
    ctx->pc = 0x30973cu;
    // NOP
    // 0x309740: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x309740u;
    {
        const bool branch_taken_0x309740 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x309744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309740u;
            // 0x309744: 0xe780a18c  swc1        $f0, -0x5E74($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x309740) {
            ctx->pc = 0x30974Cu;
            goto label_30974c;
        }
    }
    ctx->pc = 0x309748u;
    // 0x309748: 0xe782a18c  swc1        $f2, -0x5E74($gp)
    ctx->pc = 0x309748u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943116), bits); }
label_30974c:
    // 0x30974c: 0x0  nop
    ctx->pc = 0x30974cu;
    // NOP
    // 0x309750: 0xc0504a4  jal         func_141290
    ctx->pc = 0x309750u;
    SET_GPR_U32(ctx, 31, 0x309758u);
    ctx->pc = 0x309754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309750u;
            // 0x309754: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141290u;
    if (runtime->hasFunction(0x141290u)) {
        auto targetFn = runtime->lookupFunction(0x141290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309758u; }
        if (ctx->pc != 0x309758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetRotateThread__Fi_0x141290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309758u; }
        if (ctx->pc != 0x309758u) { return; }
    }
    ctx->pc = 0x309758u;
label_309758:
    // 0x309758: 0xc05096c  jal         func_1425B0
    ctx->pc = 0x309758u;
    SET_GPR_U32(ctx, 31, 0x309760u);
    ctx->pc = 0x30975Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309758u;
            // 0x30975c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1425B0u;
    if (runtime->hasFunction(0x1425B0u)) {
        auto targetFn = runtime->lookupFunction(0x1425B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309760u; }
        if (ctx->pc != 0x309760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgEndFrame__FP14mgCDrawManager_0x1425b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309760u; }
        if (ctx->pc != 0x309760u) { return; }
    }
    ctx->pc = 0x309760u;
label_309760:
    // 0x309760: 0xc0504a4  jal         func_141290
    ctx->pc = 0x309760u;
    SET_GPR_U32(ctx, 31, 0x309768u);
    ctx->pc = 0x309764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309760u;
            // 0x309764: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141290u;
    if (runtime->hasFunction(0x141290u)) {
        auto targetFn = runtime->lookupFunction(0x141290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309768u; }
        if (ctx->pc != 0x309768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetRotateThread__Fi_0x141290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309768u; }
        if (ctx->pc != 0x309768u) { return; }
    }
    ctx->pc = 0x309768u;
label_309768:
    // 0x309768: 0x8f82a19c  lw          $v0, -0x5E64($gp)
    ctx->pc = 0x309768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943132)));
    // 0x30976c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30976Cu;
    {
        const bool branch_taken_0x30976c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30976c) {
            ctx->pc = 0x3097A4u;
            goto label_3097a4;
        }
    }
    ctx->pc = 0x309774u;
    // 0x309774: 0xc781a18c  lwc1        $f1, -0x5E74($gp)
    ctx->pc = 0x309774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309778: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x309778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30977c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30977cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309780: 0x0  nop
    ctx->pc = 0x309780u;
    // NOP
    // 0x309784: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x309784u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309788: 0x0  nop
    ctx->pc = 0x309788u;
    // NOP
    // 0x30978c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x30978Cu;
    {
        const bool branch_taken_0x30978c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x309790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30978Cu;
            // 0x309790: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30978c) {
            ctx->pc = 0x3097A4u;
            goto label_3097a4;
        }
    }
    ctx->pc = 0x309794u;
    // 0x309794: 0xc0c251c  jal         func_309470
    ctx->pc = 0x309794u;
    SET_GPR_U32(ctx, 31, 0x30979Cu);
    ctx->pc = 0x309798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309794u;
            // 0x309798: 0xaf8285f4  sw          $v0, -0x7A0C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936052), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x309470u;
    if (runtime->hasFunction(0x309470u)) {
        auto targetFn = runtime->lookupFunction(0x309470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30979Cu; }
        if (ctx->pc != 0x30979Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SwitchNowLoadingThread__Fv_0x309470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30979Cu; }
        if (ctx->pc != 0x30979Cu) { return; }
    }
    ctx->pc = 0x30979Cu;
label_30979c:
    // 0x30979c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x30979Cu;
    {
        const bool branch_taken_0x30979c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30979c) {
            ctx->pc = 0x3097C8u;
            goto label_3097c8;
        }
    }
    ctx->pc = 0x3097A4u;
label_3097a4:
    // 0x3097a4: 0x0  nop
    ctx->pc = 0x3097a4u;
    // NOP
    // 0x3097a8: 0xc0c251c  jal         func_309470
    ctx->pc = 0x3097A8u;
    SET_GPR_U32(ctx, 31, 0x3097B0u);
    ctx->pc = 0x309470u;
    if (runtime->hasFunction(0x309470u)) {
        auto targetFn = runtime->lookupFunction(0x309470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3097B0u; }
        if (ctx->pc != 0x3097B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SwitchNowLoadingThread__Fv_0x309470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3097B0u; }
        if (ctx->pc != 0x3097B0u) { return; }
    }
    ctx->pc = 0x3097B0u;
label_3097b0:
    // 0x3097b0: 0x1000ff48  b           . + 4 + (-0xB8 << 2)
    ctx->pc = 0x3097B0u;
    {
        const bool branch_taken_0x3097b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3097b0) {
            ctx->pc = 0x3094D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3094d4;
        }
    }
    ctx->pc = 0x3097B8u;
label_3097b8:
    // 0x3097b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3097b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3097bc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3097BCu;
    {
        const bool branch_taken_0x3097bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3097bc) {
            ctx->pc = 0x3097C8u;
            goto label_3097c8;
        }
    }
    ctx->pc = 0x3097C4u;
    // 0x3097c4: 0xaf8285f4  sw          $v0, -0x7A0C($gp)
    ctx->pc = 0x3097c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936052), GPR_U32(ctx, 2));
label_3097c8:
    // 0x3097c8: 0xc0c251c  jal         func_309470
    ctx->pc = 0x3097C8u;
    SET_GPR_U32(ctx, 31, 0x3097D0u);
    ctx->pc = 0x309470u;
    if (runtime->hasFunction(0x309470u)) {
        auto targetFn = runtime->lookupFunction(0x309470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3097D0u; }
        if (ctx->pc != 0x3097D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SwitchNowLoadingThread__Fv_0x309470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3097D0u; }
        if (ctx->pc != 0x3097D0u) { return; }
    }
    ctx->pc = 0x3097D0u;
label_3097d0:
    // 0x3097d0: 0x1000ff38  b           . + 4 + (-0xC8 << 2)
    ctx->pc = 0x3097D0u;
    {
        const bool branch_taken_0x3097d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3097D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3097D0u;
            // 0x3097d4: 0x8f8385f4  lw          $v1, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3097d0) {
            ctx->pc = 0x3094B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3094b4;
        }
    }
    ctx->pc = 0x3097D8u;
}
