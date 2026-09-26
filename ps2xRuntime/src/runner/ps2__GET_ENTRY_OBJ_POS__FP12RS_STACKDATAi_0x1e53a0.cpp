#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_ENTRY_OBJ_POS__FP12RS_STACKDATAi
// Address: 0x1e53a0 - 0x1e5448
void ps2__GET_ENTRY_OBJ_POS__FP12RS_STACKDATAi_0x1e53a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_ENTRY_OBJ_POS__FP12RS_STACKDATAi_0x1e53a0");
#endif

    switch (ctx->pc) {
        case 0x1e53d0u: goto label_1e53d0;
        case 0x1e53e4u: goto label_1e53e4;
        case 0x1e5428u: goto label_1e5428;
        case 0x1e5434u: goto label_1e5434;
        default: break;
    }

    ctx->pc = 0x1e53a0u;

    // 0x1e53a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e53a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e53a4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1e53a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e53a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e53a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e53ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e53acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e53b0: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E53B0u;
    {
        const bool branch_taken_0x1e53b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E53B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E53B0u;
            // 0x1e53b4: 0xafa4002c  sw          $a0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e53b0) {
            ctx->pc = 0x1E53C0u;
            goto label_1e53c0;
        }
    }
    ctx->pc = 0x1E53B8u;
    // 0x1e53b8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1E53B8u;
    {
        const bool branch_taken_0x1e53b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E53BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E53B8u;
            // 0x1e53bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e53b8) {
            ctx->pc = 0x1E5438u;
            goto label_1e5438;
        }
    }
    ctx->pc = 0x1E53C0u;
label_1e53c0:
    // 0x1e53c0: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1e53c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1e53c4: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x1e53c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1e53c8: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E53C8u;
    SET_GPR_U32(ctx, 31, 0x1E53D0u);
    ctx->pc = 0x1E53CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E53C8u;
            // 0x1e53cc: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E53D0u; }
        if (ctx->pc != 0x1E53D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E53D0u; }
        if (ctx->pc != 0x1E53D0u) { return; }
    }
    ctx->pc = 0x1E53D0u;
label_1e53d0:
    // 0x1e53d0: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1e53d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1e53d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e53d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e53d8: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x1e53d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1e53dc: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E53DCu;
    SET_GPR_U32(ctx, 31, 0x1E53E4u);
    ctx->pc = 0x1E53E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E53DCu;
            // 0x1e53e0: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E53E4u; }
        if (ctx->pc != 0x1E53E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E53E4u; }
        if (ctx->pc != 0x1E53E4u) { return; }
    }
    ctx->pc = 0x1E53E4u;
label_1e53e4:
    // 0x1e53e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e53e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e53e8: 0x1203000a  beq         $s0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1E53E8u;
    {
        const bool branch_taken_0x1e53e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e53e8) {
            ctx->pc = 0x1E5414u;
            goto label_1e5414;
        }
    }
    ctx->pc = 0x1E53F0u;
    // 0x1e53f0: 0x8f848db8  lw          $a0, -0x7248($gp)
    ctx->pc = 0x1e53f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e53f4: 0x2603ffe8  addiu       $v1, $s0, -0x18
    ctx->pc = 0x1e53f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967272));
    // 0x1e53f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e53f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e53fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e53fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e5400: 0x8c640484  lw          $a0, 0x484($v1)
    ctx->pc = 0x1e5400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1156)));
    // 0x1e5404: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E5404u;
    {
        const bool branch_taken_0x1e5404 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5404u;
            // 0x1e5408: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5404) {
            ctx->pc = 0x1E5420u;
            goto label_1e5420;
        }
    }
    ctx->pc = 0x1E540Cu;
    // 0x1e540c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E540Cu;
    {
        const bool branch_taken_0x1e540c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E540Cu;
            // 0x1e5410: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e540c) {
            ctx->pc = 0x1E5438u;
            goto label_1e5438;
        }
    }
    ctx->pc = 0x1E5414u;
label_1e5414:
    // 0x1e5414: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e5414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e5418: 0x0  nop
    ctx->pc = 0x1e5418u;
    // NOP
    // 0x1e541c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e541cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e5420:
    // 0x1e5420: 0xc05d3d4  jal         func_174F50
    ctx->pc = 0x1E5420u;
    SET_GPR_U32(ctx, 31, 0x1E5428u);
    ctx->pc = 0x1E5424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5420u;
            // 0x1e5424: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174F50u;
    if (runtime->hasFunction(0x174F50u)) {
        auto targetFn = runtime->lookupFunction(0x174F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5428u; }
        if (ctx->pc != 0x1E5428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiPf_0x174f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5428u; }
        if (ctx->pc != 0x1E5428u) { return; }
    }
    ctx->pc = 0x1E5428u;
label_1e5428:
    // 0x1e5428: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e5428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e542c: 0xc0781e4  jal         func_1E0790
    ctx->pc = 0x1E542Cu;
    SET_GPR_U32(ctx, 31, 0x1E5434u);
    ctx->pc = 0x1E5430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E542Cu;
            // 0x1e5430: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0790u;
    if (runtime->hasFunction(0x1E0790u)) {
        auto targetFn = runtime->lookupFunction(0x1E0790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5434u; }
        if (ctx->pc != 0x1E5434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStackVector__FPfPP12RS_STACKDATA_0x1e0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5434u; }
        if (ctx->pc != 0x1E5434u) { return; }
    }
    ctx->pc = 0x1E5434u;
label_1e5434:
    // 0x1e5434: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5438:
    // 0x1e5438: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e5438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e543c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e543cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5440: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5440u;
            // 0x1e5444: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E5448u;
}
