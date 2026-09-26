#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _PIC_NAME__FP9SPI_STACKi
// Address: 0x1ff7c0 - 0x1ff868
void ps2__PIC_NAME__FP9SPI_STACKi_0x1ff7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__PIC_NAME__FP9SPI_STACKi_0x1ff7c0");
#endif

    switch (ctx->pc) {
        case 0x1ff7f0u: goto label_1ff7f0;
        case 0x1ff800u: goto label_1ff800;
        case 0x1ff80cu: goto label_1ff80c;
        case 0x1ff818u: goto label_1ff818;
        default: break;
    }

    ctx->pc = 0x1ff7c0u;

    // 0x1ff7c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ff7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ff7c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ff7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ff7c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ff7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ff7cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ff7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ff7d0: 0x878390f8  lh          $v1, -0x6F08($gp)
    ctx->pc = 0x1ff7d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938872)));
    // 0x1ff7d4: 0x8f8290f0  lw          $v0, -0x6F10($gp)
    ctx->pc = 0x1ff7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
    // 0x1ff7d8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1ff7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1ff7dc: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1ff7dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ff7e0: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1FF7E0u;
    {
        const bool branch_taken_0x1ff7e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF7E0u;
            // 0x1ff7e4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff7e0) {
            ctx->pc = 0x1FF850u;
            goto label_1ff850;
        }
    }
    ctx->pc = 0x1FF7E8u;
    // 0x1ff7e8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1FF7E8u;
    SET_GPR_U32(ctx, 31, 0x1FF7F0u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF7F0u; }
        if (ctx->pc != 0x1FF7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF7F0u; }
        if (ctx->pc != 0x1FF7F0u) { return; }
    }
    ctx->pc = 0x1FF7F0u;
label_1ff7f0:
    // 0x1ff7f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ff7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff7f4: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1ff7f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ff7f8: 0xc05191c  jal         func_146470
    ctx->pc = 0x1FF7F8u;
    SET_GPR_U32(ctx, 31, 0x1FF800u);
    ctx->pc = 0x1FF7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF7F8u;
            // 0x1ff7fc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF800u; }
        if (ctx->pc != 0x1FF800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF800u; }
        if (ctx->pc != 0x1FF800u) { return; }
    }
    ctx->pc = 0x1FF800u;
label_1ff800:
    // 0x1ff800: 0x8f8590ec  lw          $a1, -0x6F14($gp)
    ctx->pc = 0x1ff800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938860)));
    // 0x1ff804: 0xc04e7a0  jal         func_139E80
    ctx->pc = 0x1FF804u;
    SET_GPR_U32(ctx, 31, 0x1FF80Cu);
    ctx->pc = 0x1FF808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF804u;
            // 0x1ff808: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E80u;
    if (runtime->hasFunction(0x139E80u)) {
        auto targetFn = runtime->lookupFunction(0x139E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF80Cu; }
        if (ctx->pc != 0x1FF80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCopyString__FPcP9mgCMemory_0x139e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF80Cu; }
        if (ctx->pc != 0x1FF80Cu) { return; }
    }
    ctx->pc = 0x1FF80Cu;
label_1ff80c:
    // 0x1ff80c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ff80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff810: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1FF810u;
    SET_GPR_U32(ctx, 31, 0x1FF818u);
    ctx->pc = 0x1FF814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF810u;
            // 0x1ff814: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF818u; }
        if (ctx->pc != 0x1FF818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF818u; }
        if (ctx->pc != 0x1FF818u) { return; }
    }
    ctx->pc = 0x1FF818u;
label_1ff818:
    // 0x1ff818: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x1ff818u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ff81c: 0x878390f8  lh          $v1, -0x6F08($gp)
    ctx->pc = 0x1ff81cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938872)));
    // 0x1ff820: 0x24027530  addiu       $v0, $zero, 0x7530
    ctx->pc = 0x1ff820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
    // 0x1ff824: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ff824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ff828: 0xa78390f8  sh          $v1, -0x6F08($gp)
    ctx->pc = 0x1ff828u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938872), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ff82c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1ff82cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ff830: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FF830u;
    {
        const bool branch_taken_0x1ff830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ff830) {
            ctx->pc = 0x1FF850u;
            goto label_1ff850;
        }
    }
    ctx->pc = 0x1FF838u;
    // 0x1ff838: 0x878390f8  lh          $v1, -0x6F08($gp)
    ctx->pc = 0x1ff838u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938872)));
    // 0x1ff83c: 0x878290f4  lh          $v0, -0x6F0C($gp)
    ctx->pc = 0x1ff83cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938868)));
    // 0x1ff840: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ff840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ff844: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ff844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ff848: 0xa78390f8  sh          $v1, -0x6F08($gp)
    ctx->pc = 0x1ff848u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938872), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ff84c: 0xa78290f4  sh          $v0, -0x6F0C($gp)
    ctx->pc = 0x1ff84cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938868), (uint16_t)GPR_U32(ctx, 2));
label_1ff850:
    // 0x1ff850: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ff850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ff854: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ff854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff858: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ff858u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff85c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ff85cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff860: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF860u;
            // 0x1ff864: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF868u;
}
