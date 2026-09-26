#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MES_MAKE__FP12RS_STACKDATAi
// Address: 0x26c6e0 - 0x26c8b0
void ps2__MES_MAKE__FP12RS_STACKDATAi_0x26c6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MES_MAKE__FP12RS_STACKDATAi_0x26c6e0");
#endif

    switch (ctx->pc) {
        case 0x26c704u: goto label_26c704;
        case 0x26c710u: goto label_26c710;
        case 0x26c74cu: goto label_26c74c;
        case 0x26c760u: goto label_26c760;
        case 0x26c7a8u: goto label_26c7a8;
        case 0x26c7d0u: goto label_26c7d0;
        case 0x26c81cu: goto label_26c81c;
        case 0x26c844u: goto label_26c844;
        case 0x26c854u: goto label_26c854;
        case 0x26c864u: goto label_26c864;
        case 0x26c878u: goto label_26c878;
        case 0x26c890u: goto label_26c890;
        default: break;
    }

    ctx->pc = 0x26c6e0u;

    // 0x26c6e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26c6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26c6e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26c6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x26c6e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26c6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26c6ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26c6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26c6f0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x26c6f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c6f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26c6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26c6f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26c6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26c6fc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26C6FCu;
    SET_GPR_U32(ctx, 31, 0x26C704u);
    ctx->pc = 0x26C700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C6FCu;
            // 0x26c700: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C704u; }
        if (ctx->pc != 0x26C704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C704u; }
        if (ctx->pc != 0x26C704u) { return; }
    }
    ctx->pc = 0x26C704u;
label_26c704:
    // 0x26c704: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26c704u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c708: 0xc09b1b4  jal         func_26C6D0
    ctx->pc = 0x26C708u;
    SET_GPR_U32(ctx, 31, 0x26C710u);
    ctx->pc = 0x26C70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C708u;
            // 0x26c70c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C6D0u;
    if (runtime->hasFunction(0x26C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x26C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C710u; }
        if (ctx->pc != 0x26C710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMes__Fi_0x26c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C710u; }
        if (ctx->pc != 0x26C710u) { return; }
    }
    ctx->pc = 0x26C710u;
label_26c710:
    // 0x26c710: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26c710u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c714: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C714u;
    {
        const bool branch_taken_0x26c714 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C714u;
            // 0x26c718: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c714) {
            ctx->pc = 0x26C724u;
            goto label_26c724;
        }
    }
    ctx->pc = 0x26C71Cu;
    // 0x26c71c: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x26C71Cu;
    {
        const bool branch_taken_0x26c71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C71Cu;
            // 0x26c720: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c71c) {
            ctx->pc = 0x26C898u;
            goto label_26c898;
        }
    }
    ctx->pc = 0x26C724u;
label_26c724:
    // 0x26c724: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x26c724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26c728: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26c728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26c72c: 0x1062004b  beq         $v1, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x26C72Cu;
    {
        const bool branch_taken_0x26c72c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26C730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C72Cu;
            // 0x26c730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c72c) {
            ctx->pc = 0x26C85Cu;
            goto label_26c85c;
        }
    }
    ctx->pc = 0x26C734u;
    // 0x26c734: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C734u;
    {
        const bool branch_taken_0x26c734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C734u;
            // 0x26c738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c734) {
            ctx->pc = 0x26C744u;
            goto label_26c744;
        }
    }
    ctx->pc = 0x26C73Cu;
    // 0x26c73c: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x26C73Cu;
    {
        const bool branch_taken_0x26c73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C73Cu;
            // 0x26c740: 0x2a620003  slti        $v0, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c73c) {
            ctx->pc = 0x26C87Cu;
            goto label_26c87c;
        }
    }
    ctx->pc = 0x26C744u;
label_26c744:
    // 0x26c744: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26C744u;
    SET_GPR_U32(ctx, 31, 0x26C74Cu);
    ctx->pc = 0x26C748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C744u;
            // 0x26c748: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C74Cu; }
        if (ctx->pc != 0x26C74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C74Cu; }
        if (ctx->pc != 0x26C74Cu) { return; }
    }
    ctx->pc = 0x26C74Cu;
label_26c74c:
    // 0x26c74c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x26c74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26c750: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26C750u;
    {
        const bool branch_taken_0x26c750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26C754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C750u;
            // 0x26c754: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c750) {
            ctx->pc = 0x26C768u;
            goto label_26c768;
        }
    }
    ctx->pc = 0x26C758u;
    // 0x26c758: 0xc0562c8  jal         func_158B20
    ctx->pc = 0x26C758u;
    SET_GPR_U32(ctx, 31, 0x26C760u);
    ctx->pc = 0x26C75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C758u;
            // 0x26c75c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C760u; }
        if (ctx->pc != 0x26C760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C760u; }
        if (ctx->pc != 0x26C760u) { return; }
    }
    ctx->pc = 0x26C760u;
label_26c760:
    // 0x26c760: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x26C760u;
    {
        const bool branch_taken_0x26c760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C760u;
            // 0x26c764: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c760) {
            ctx->pc = 0x26C894u;
            goto label_26c894;
        }
    }
    ctx->pc = 0x26C768u;
label_26c768:
    // 0x26c768: 0x8e4417ec  lw          $a0, 0x17EC($s2)
    ctx->pc = 0x26c768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6124)));
    // 0x26c76c: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x26C76Cu;
    {
        const bool branch_taken_0x26c76c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c76c) {
            ctx->pc = 0x26C7D8u;
            goto label_26c7d8;
        }
    }
    ctx->pc = 0x26C774u;
    // 0x26c774: 0x8e4517f0  lw          $a1, 0x17F0($s2)
    ctx->pc = 0x26c774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6128)));
    // 0x26c778: 0x4a00017  bltz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x26C778u;
    {
        const bool branch_taken_0x26c778 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x26c778) {
            ctx->pc = 0x26C7D8u;
            goto label_26c7d8;
        }
    }
    ctx->pc = 0x26C780u;
    // 0x26c780: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C780u;
    {
        const bool branch_taken_0x26c780 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c780) {
            ctx->pc = 0x26C790u;
            goto label_26c790;
        }
    }
    ctx->pc = 0x26C788u;
    // 0x26c788: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x26C788u;
    {
        const bool branch_taken_0x26c788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C788u;
            // 0x26c78c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c788) {
            ctx->pc = 0x26C894u;
            goto label_26c894;
        }
    }
    ctx->pc = 0x26C790u;
label_26c790:
    // 0x26c790: 0x1ca00003  bgtz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C790u;
    {
        const bool branch_taken_0x26c790 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x26C794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C790u;
            // 0x26c794: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c790) {
            ctx->pc = 0x26C7A0u;
            goto label_26c7a0;
        }
    }
    ctx->pc = 0x26C798u;
    // 0x26c798: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x26C798u;
    {
        const bool branch_taken_0x26c798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C798u;
            // 0x26c79c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c798) {
            ctx->pc = 0x26C894u;
            goto label_26c894;
        }
    }
    ctx->pc = 0x26C7A0u;
label_26c7a0:
    // 0x26c7a0: 0xc054a68  jal         func_1529A0
    ctx->pc = 0x26C7A0u;
    SET_GPR_U32(ctx, 31, 0x26C7A8u);
    ctx->pc = 0x1529A0u;
    if (runtime->hasFunction(0x1529A0u)) {
        auto targetFn = runtime->lookupFunction(0x1529A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C7A8u; }
        if (ctx->pc != 0x26C7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBuffMesIdPtr__FPcii_0x1529a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C7A8u; }
        if (ctx->pc != 0x26C7A8u) { return; }
    }
    ctx->pc = 0x26C7A8u;
label_26c7a8:
    // 0x26c7a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C7A8u;
    {
        const bool branch_taken_0x26c7a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c7a8) {
            ctx->pc = 0x26C7B8u;
            goto label_26c7b8;
        }
    }
    ctx->pc = 0x26C7B0u;
    // 0x26c7b0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x26C7B0u;
    {
        const bool branch_taken_0x26c7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C7B0u;
            // 0x26c7b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c7b0) {
            ctx->pc = 0x26C894u;
            goto label_26c894;
        }
    }
    ctx->pc = 0x26C7B8u;
label_26c7b8:
    // 0x26c7b8: 0xae4217e8  sw          $v0, 0x17E8($s2)
    ctx->pc = 0x26c7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6120), GPR_U32(ctx, 2));
    // 0x26c7bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26c7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c7c0: 0x8e4517e8  lw          $a1, 0x17E8($s2)
    ctx->pc = 0x26c7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6120)));
    // 0x26c7c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26c7c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c7c8: 0xc05638c  jal         func_158E30
    ctx->pc = 0x26C7C8u;
    SET_GPR_U32(ctx, 31, 0x26C7D0u);
    ctx->pc = 0x26C7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C7C8u;
            // 0x26c7cc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158E30u;
    if (runtime->hasFunction(0x158E30u)) {
        auto targetFn = runtime->lookupFunction(0x158E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C7D0u; }
        if (ctx->pc != 0x26C7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFPcii_0x158e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C7D0u; }
        if (ctx->pc != 0x26C7D0u) { return; }
    }
    ctx->pc = 0x26C7D0u;
label_26c7d0:
    // 0x26c7d0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x26C7D0u;
    {
        const bool branch_taken_0x26c7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c7d0) {
            ctx->pc = 0x26C878u;
            goto label_26c878;
        }
    }
    ctx->pc = 0x26C7D8u;
label_26c7d8:
    // 0x26c7d8: 0x1620001c  bnez        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x26C7D8u;
    {
        const bool branch_taken_0x26c7d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C7D8u;
            // 0x26c7dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c7d8) {
            ctx->pc = 0x26C84Cu;
            goto label_26c84c;
        }
    }
    ctx->pc = 0x26C7E0u;
    // 0x26c7e0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x26c7e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x26c7e4: 0x8c24e858  lw          $a0, -0x17A8($at)
    ctx->pc = 0x26c7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961240)));
    // 0x26c7e8: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x26C7E8u;
    {
        const bool branch_taken_0x26c7e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c7e8) {
            ctx->pc = 0x26C84Cu;
            goto label_26c84c;
        }
    }
    ctx->pc = 0x26C7F0u;
    // 0x26c7f0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C7F0u;
    {
        const bool branch_taken_0x26c7f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C7F0u;
            // 0x26c7f4: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c7f0) {
            ctx->pc = 0x26C800u;
            goto label_26c800;
        }
    }
    ctx->pc = 0x26C7F8u;
    // 0x26c7f8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x26C7F8u;
    {
        const bool branch_taken_0x26c7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C7F8u;
            // 0x26c7fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c7f8) {
            ctx->pc = 0x26C894u;
            goto label_26c894;
        }
    }
    ctx->pc = 0x26C800u;
label_26c800:
    // 0x26c800: 0x8c25e85c  lw          $a1, -0x17A4($at)
    ctx->pc = 0x26c800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961244)));
    // 0x26c804: 0x1ca00003  bgtz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C804u;
    {
        const bool branch_taken_0x26c804 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x26C808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C804u;
            // 0x26c808: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c804) {
            ctx->pc = 0x26C814u;
            goto label_26c814;
        }
    }
    ctx->pc = 0x26C80Cu;
    // 0x26c80c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x26C80Cu;
    {
        const bool branch_taken_0x26c80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C80Cu;
            // 0x26c810: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c80c) {
            ctx->pc = 0x26C894u;
            goto label_26c894;
        }
    }
    ctx->pc = 0x26C814u;
label_26c814:
    // 0x26c814: 0xc054a68  jal         func_1529A0
    ctx->pc = 0x26C814u;
    SET_GPR_U32(ctx, 31, 0x26C81Cu);
    ctx->pc = 0x1529A0u;
    if (runtime->hasFunction(0x1529A0u)) {
        auto targetFn = runtime->lookupFunction(0x1529A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C81Cu; }
        if (ctx->pc != 0x26C81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBuffMesIdPtr__FPcii_0x1529a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C81Cu; }
        if (ctx->pc != 0x26C81Cu) { return; }
    }
    ctx->pc = 0x26C81Cu;
label_26c81c:
    // 0x26c81c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C81Cu;
    {
        const bool branch_taken_0x26c81c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c81c) {
            ctx->pc = 0x26C82Cu;
            goto label_26c82c;
        }
    }
    ctx->pc = 0x26C824u;
    // 0x26c824: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x26C824u;
    {
        const bool branch_taken_0x26c824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C824u;
            // 0x26c828: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c824) {
            ctx->pc = 0x26C894u;
            goto label_26c894;
        }
    }
    ctx->pc = 0x26C82Cu;
label_26c82c:
    // 0x26c82c: 0xae4217e8  sw          $v0, 0x17E8($s2)
    ctx->pc = 0x26c82cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6120), GPR_U32(ctx, 2));
    // 0x26c830: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26c830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c834: 0x8e4517e8  lw          $a1, 0x17E8($s2)
    ctx->pc = 0x26c834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6120)));
    // 0x26c838: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26c838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c83c: 0xc05638c  jal         func_158E30
    ctx->pc = 0x26C83Cu;
    SET_GPR_U32(ctx, 31, 0x26C844u);
    ctx->pc = 0x26C840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C83Cu;
            // 0x26c840: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158E30u;
    if (runtime->hasFunction(0x158E30u)) {
        auto targetFn = runtime->lookupFunction(0x158E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C844u; }
        if (ctx->pc != 0x26C844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFPcii_0x158e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C844u; }
        if (ctx->pc != 0x26C844u) { return; }
    }
    ctx->pc = 0x26C844u;
label_26c844:
    // 0x26c844: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26C844u;
    {
        const bool branch_taken_0x26c844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c844) {
            ctx->pc = 0x26C878u;
            goto label_26c878;
        }
    }
    ctx->pc = 0x26C84Cu;
label_26c84c:
    // 0x26c84c: 0xc0562c8  jal         func_158B20
    ctx->pc = 0x26C84Cu;
    SET_GPR_U32(ctx, 31, 0x26C854u);
    ctx->pc = 0x26C850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C84Cu;
            // 0x26c850: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C854u; }
        if (ctx->pc != 0x26C854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C854u; }
        if (ctx->pc != 0x26C854u) { return; }
    }
    ctx->pc = 0x26C854u;
label_26c854:
    // 0x26c854: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26C854u;
    {
        const bool branch_taken_0x26c854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c854) {
            ctx->pc = 0x26C878u;
            goto label_26c878;
        }
    }
    ctx->pc = 0x26C85Cu;
label_26c85c:
    // 0x26c85c: 0xc097e48  jal         func_25F920
    ctx->pc = 0x26C85Cu;
    SET_GPR_U32(ctx, 31, 0x26C864u);
    ctx->pc = 0x26C860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C85Cu;
            // 0x26c860: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C864u; }
        if (ctx->pc != 0x26C864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C864u; }
        if (ctx->pc != 0x26C864u) { return; }
    }
    ctx->pc = 0x26C864u;
label_26c864:
    // 0x26c864: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26c864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c868: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26c868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c86c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26c86cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c870: 0xc05638c  jal         func_158E30
    ctx->pc = 0x26C870u;
    SET_GPR_U32(ctx, 31, 0x26C878u);
    ctx->pc = 0x26C874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C870u;
            // 0x26c874: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158E30u;
    if (runtime->hasFunction(0x158E30u)) {
        auto targetFn = runtime->lookupFunction(0x158E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C878u; }
        if (ctx->pc != 0x26C878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFPcii_0x158e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C878u; }
        if (ctx->pc != 0x26C878u) { return; }
    }
    ctx->pc = 0x26C878u;
label_26c878:
    // 0x26c878: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x26c878u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
label_26c87c:
    // 0x26c87c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26C87Cu;
    {
        const bool branch_taken_0x26c87c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C87Cu;
            // 0x26c880: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c87c) {
            ctx->pc = 0x26C894u;
            goto label_26c894;
        }
    }
    ctx->pc = 0x26C884u;
    // 0x26c884: 0x8e4500d4  lw          $a1, 0xD4($s2)
    ctx->pc = 0x26c884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x26c888: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26C888u;
    SET_GPR_U32(ctx, 31, 0x26C890u);
    ctx->pc = 0x26C88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C888u;
            // 0x26c88c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C890u; }
        if (ctx->pc != 0x26C890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C890u; }
        if (ctx->pc != 0x26C890u) { return; }
    }
    ctx->pc = 0x26C890u;
label_26c890:
    // 0x26c890: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26c890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26c894:
    // 0x26c894: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26c894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_26c898:
    // 0x26c898: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26c898u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c89c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26c89cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26c8a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26c8a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c8a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26c8a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c8a8: 0x3e00008  jr          $ra
    ctx->pc = 0x26C8A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C8A8u;
            // 0x26c8ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26C8B0u;
}
