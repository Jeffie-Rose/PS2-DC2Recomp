#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FillRect__Fiiiiiiii
// Address: 0x1517f0 - 0x151934
void FillRect__Fiiiiiiii_0x1517f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FillRect__Fiiiiiiii_0x1517f0");
#endif

    switch (ctx->pc) {
        case 0x151840u: goto label_151840;
        case 0x151850u: goto label_151850;
        case 0x15185cu: goto label_15185c;
        case 0x151868u: goto label_151868;
        case 0x151874u: goto label_151874;
        case 0x151884u: goto label_151884;
        case 0x151890u: goto label_151890;
        case 0x15189cu: goto label_15189c;
        case 0x1518a8u: goto label_1518a8;
        case 0x1518b4u: goto label_1518b4;
        case 0x1518c0u: goto label_1518c0;
        case 0x1518d8u: goto label_1518d8;
        case 0x1518ecu: goto label_1518ec;
        case 0x151900u: goto label_151900;
        case 0x151908u: goto label_151908;
        default: break;
    }

    ctx->pc = 0x1517f0u;

    // 0x1517f0: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x1517f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x1517f4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1517f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1517f8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1517f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1517fc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1517fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x151800: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x151800u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151804: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x151804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x151808: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x151808u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15180c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15180cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x151810: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x151810u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151814: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x151814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x151818: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x151818u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15181c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15181cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x151820: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x151820u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151824: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x151824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x151828: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x151828u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15182c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15182cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x151830: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x151830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151834: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x151834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151838: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x151838u;
    SET_GPR_U32(ctx, 31, 0x151840u);
    ctx->pc = 0x15183Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151838u;
            // 0x15183c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151840u; }
        if (ctx->pc != 0x151840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151840u; }
        if (ctx->pc != 0x151840u) { return; }
    }
    ctx->pc = 0x151840u;
label_151840:
    // 0x151840: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x151840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x151844: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x151844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151848: 0xc04d104  jal         func_134410
    ctx->pc = 0x151848u;
    SET_GPR_U32(ctx, 31, 0x151850u);
    ctx->pc = 0x15184Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151848u;
            // 0x15184c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151850u; }
        if (ctx->pc != 0x151850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151850u; }
        if (ctx->pc != 0x151850u) { return; }
    }
    ctx->pc = 0x151850u;
label_151850:
    // 0x151850: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x151850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x151854: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x151854u;
    SET_GPR_U32(ctx, 31, 0x15185Cu);
    ctx->pc = 0x151858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151854u;
            // 0x151858: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15185Cu; }
        if (ctx->pc != 0x15185Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15185Cu; }
        if (ctx->pc != 0x15185Cu) { return; }
    }
    ctx->pc = 0x15185Cu;
label_15185c:
    // 0x15185c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x15185cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x151860: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x151860u;
    SET_GPR_U32(ctx, 31, 0x151868u);
    ctx->pc = 0x151864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151860u;
            // 0x151864: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151868u; }
        if (ctx->pc != 0x151868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151868u; }
        if (ctx->pc != 0x151868u) { return; }
    }
    ctx->pc = 0x151868u;
label_151868:
    // 0x151868: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x151868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x15186c: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x15186Cu;
    SET_GPR_U32(ctx, 31, 0x151874u);
    ctx->pc = 0x151870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15186Cu;
            // 0x151870: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151874u; }
        if (ctx->pc != 0x151874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151874u; }
        if (ctx->pc != 0x151874u) { return; }
    }
    ctx->pc = 0x151874u;
label_151874:
    // 0x151874: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x151874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x151878: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x151878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15187c: 0xc04d3c4  jal         func_134F10
    ctx->pc = 0x15187Cu;
    SET_GPR_U32(ctx, 31, 0x151884u);
    ctx->pc = 0x151880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15187Cu;
            // 0x151880: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F10u;
    if (runtime->hasFunction(0x134F10u)) {
        auto targetFn = runtime->lookupFunction(0x134F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151884u; }
        if (ctx->pc != 0x151884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTest__11mgCDrawPrimFii_0x134f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151884u; }
        if (ctx->pc != 0x151884u) { return; }
    }
    ctx->pc = 0x151884u;
label_151884:
    // 0x151884: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x151884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x151888: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x151888u;
    SET_GPR_U32(ctx, 31, 0x151890u);
    ctx->pc = 0x15188Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151888u;
            // 0x15188c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151890u; }
        if (ctx->pc != 0x151890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151890u; }
        if (ctx->pc != 0x151890u) { return; }
    }
    ctx->pc = 0x151890u;
label_151890:
    // 0x151890: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x151890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x151894: 0xc04d424  jal         func_135090
    ctx->pc = 0x151894u;
    SET_GPR_U32(ctx, 31, 0x15189Cu);
    ctx->pc = 0x151898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151894u;
            // 0x151898: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15189Cu; }
        if (ctx->pc != 0x15189Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15189Cu; }
        if (ctx->pc != 0x15189Cu) { return; }
    }
    ctx->pc = 0x15189Cu;
label_15189c:
    // 0x15189c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x15189cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1518a0: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x1518A0u;
    SET_GPR_U32(ctx, 31, 0x1518A8u);
    ctx->pc = 0x1518A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1518A0u;
            // 0x1518a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1518A8u; }
        if (ctx->pc != 0x1518A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1518A8u; }
        if (ctx->pc != 0x1518A8u) { return; }
    }
    ctx->pc = 0x1518A8u;
label_1518a8:
    // 0x1518a8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1518a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1518ac: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x1518ACu;
    SET_GPR_U32(ctx, 31, 0x1518B4u);
    ctx->pc = 0x1518B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1518ACu;
            // 0x1518b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1518B4u; }
        if (ctx->pc != 0x1518B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1518B4u; }
        if (ctx->pc != 0x1518B4u) { return; }
    }
    ctx->pc = 0x1518B4u;
label_1518b4:
    // 0x1518b4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1518b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1518b8: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1518B8u;
    SET_GPR_U32(ctx, 31, 0x1518C0u);
    ctx->pc = 0x1518BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1518B8u;
            // 0x1518bc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1518C0u; }
        if (ctx->pc != 0x1518C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1518C0u; }
        if (ctx->pc != 0x1518C0u) { return; }
    }
    ctx->pc = 0x1518C0u;
label_1518c0:
    // 0x1518c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1518c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1518c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1518c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1518c8: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1518c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1518cc: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1518ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1518d0: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1518D0u;
    SET_GPR_U32(ctx, 31, 0x1518D8u);
    ctx->pc = 0x1518D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1518D0u;
            // 0x1518d4: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1518D8u; }
        if (ctx->pc != 0x1518D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1518D8u; }
        if (ctx->pc != 0x1518D8u) { return; }
    }
    ctx->pc = 0x1518D8u;
label_1518d8:
    // 0x1518d8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1518d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1518dc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1518dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1518e0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1518e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1518e4: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1518E4u;
    SET_GPR_U32(ctx, 31, 0x1518ECu);
    ctx->pc = 0x1518E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1518E4u;
            // 0x1518e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1518ECu; }
        if (ctx->pc != 0x1518ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1518ECu; }
        if (ctx->pc != 0x1518ECu) { return; }
    }
    ctx->pc = 0x1518ECu;
label_1518ec:
    // 0x1518ec: 0x2b32821  addu        $a1, $s5, $s3
    ctx->pc = 0x1518ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x1518f0: 0x2923021  addu        $a2, $s4, $s2
    ctx->pc = 0x1518f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x1518f4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1518f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1518f8: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1518F8u;
    SET_GPR_U32(ctx, 31, 0x151900u);
    ctx->pc = 0x1518FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1518F8u;
            // 0x1518fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151900u; }
        if (ctx->pc != 0x151900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151900u; }
        if (ctx->pc != 0x151900u) { return; }
    }
    ctx->pc = 0x151900u;
label_151900:
    // 0x151900: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x151900u;
    SET_GPR_U32(ctx, 31, 0x151908u);
    ctx->pc = 0x151904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151900u;
            // 0x151904: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151908u; }
        if (ctx->pc != 0x151908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151908u; }
        if (ctx->pc != 0x151908u) { return; }
    }
    ctx->pc = 0x151908u;
label_151908:
    // 0x151908: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x151908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15190c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15190cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x151910: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x151910u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x151914: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x151914u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x151918: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x151918u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15191c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15191cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x151920: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x151920u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151924: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151924u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151928: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x151928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15192c: 0x3e00008  jr          $ra
    ctx->pc = 0x15192Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15192Cu;
            // 0x151930: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x151934u;
}
