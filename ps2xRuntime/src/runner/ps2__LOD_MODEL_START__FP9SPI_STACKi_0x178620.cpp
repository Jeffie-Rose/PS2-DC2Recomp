#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _LOD_MODEL_START__FP9SPI_STACKi
// Address: 0x178620 - 0x1786cc
void ps2__LOD_MODEL_START__FP9SPI_STACKi_0x178620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__LOD_MODEL_START__FP9SPI_STACKi_0x178620");
#endif

    switch (ctx->pc) {
        case 0x178630u: goto label_178630;
        case 0x17866cu: goto label_17866c;
        case 0x178684u: goto label_178684;
        case 0x1786a0u: goto label_1786a0;
        default: break;
    }

    ctx->pc = 0x178620u;

    // 0x178620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x178624: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x178624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x178628: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x178628u;
    SET_GPR_U32(ctx, 31, 0x178630u);
    ctx->pc = 0x17862Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178628u;
            // 0x17862c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178630u; }
        if (ctx->pc != 0x178630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178630u; }
        if (ctx->pc != 0x178630u) { return; }
    }
    ctx->pc = 0x178630u;
label_178630:
    // 0x178630: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x178630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178634: 0x1e000003  bgtz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x178634u;
    {
        const bool branch_taken_0x178634 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x178638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178634u;
            // 0x178638: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178634) {
            ctx->pc = 0x178644u;
            goto label_178644;
        }
    }
    ctx->pc = 0x17863Cu;
    // 0x17863c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x17863Cu;
    {
        const bool branch_taken_0x17863c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17863Cu;
            // 0x178640: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17863c) {
            ctx->pc = 0x1786BCu;
            goto label_1786bc;
        }
    }
    ctx->pc = 0x178644u;
label_178644:
    // 0x178644: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x178644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x178648: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x178648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x17864c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x17864cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x178650: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x178650u;
    {
        const bool branch_taken_0x178650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178650u;
            // 0x178654: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178650) {
            ctx->pc = 0x178660u;
            goto label_178660;
        }
    }
    ctx->pc = 0x178658u;
    // 0x178658: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x178658u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x17865c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17865cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_178660:
    // 0x178660: 0x8f8489dc  lw          $a0, -0x7624($gp)
    ctx->pc = 0x178660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937052)));
    // 0x178664: 0xc04e748  jal         func_139D20
    ctx->pc = 0x178664u;
    SET_GPR_U32(ctx, 31, 0x17866Cu);
    ctx->pc = 0x178668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178664u;
            // 0x178668: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17866Cu; }
        if (ctx->pc != 0x17866Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17866Cu; }
        if (ctx->pc != 0x17866Cu) { return; }
    }
    ctx->pc = 0x17866Cu;
label_17866c:
    // 0x17866c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x17866cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x178670: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x178670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178674: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x178674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x178678: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x178678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x17867c: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x17867Cu;
    SET_GPR_U32(ctx, 31, 0x178684u);
    ctx->pc = 0x178680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17867Cu;
            // 0x178680: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178684u; }
        if (ctx->pc != 0x178684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178684u; }
        if (ctx->pc != 0x178684u) { return; }
    }
    ctx->pc = 0x178684u;
label_178684:
    // 0x178684: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x178684u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x178688: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x178688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17868c: 0x24a586d0  addiu       $a1, $a1, -0x7930
    ctx->pc = 0x17868cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936272));
    // 0x178690: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x178690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178694: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x178694u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x178698: 0xc0400bc  jal         func_1002F0
    ctx->pc = 0x178698u;
    SET_GPR_U32(ctx, 31, 0x1786A0u);
    ctx->pc = 0x17869Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178698u;
            // 0x17869c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1786A0u; }
        if (ctx->pc != 0x1786A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1786A0u; }
        if (ctx->pc != 0x1786A0u) { return; }
    }
    ctx->pc = 0x1786A0u;
label_1786a0:
    // 0x1786a0: 0x8f8389a8  lw          $v1, -0x7658($gp)
    ctx->pc = 0x1786a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x1786a4: 0xac620350  sw          $v0, 0x350($v1)
    ctx->pc = 0x1786a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 848), GPR_U32(ctx, 2));
    // 0x1786a8: 0x8f8389a8  lw          $v1, -0x7658($gp)
    ctx->pc = 0x1786a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x1786ac: 0x8c620350  lw          $v0, 0x350($v1)
    ctx->pc = 0x1786acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 848)));
    // 0x1786b0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1786B0u;
    {
        const bool branch_taken_0x1786b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1786B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1786B0u;
            // 0x1786b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1786b0) {
            ctx->pc = 0x1786BCu;
            goto label_1786bc;
        }
    }
    ctx->pc = 0x1786B8u;
    // 0x1786b8: 0xac70034c  sw          $s0, 0x34C($v1)
    ctx->pc = 0x1786b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 844), GPR_U32(ctx, 16));
label_1786bc:
    // 0x1786bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1786bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1786c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1786c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1786c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1786C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1786C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1786C4u;
            // 0x1786c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1786CCu;
}
