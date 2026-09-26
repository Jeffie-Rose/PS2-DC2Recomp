#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: fpFISH_MAP__FP9SPI_STACKi
// Address: 0x303bb0 - 0x303c50
void fpFISH_MAP__FP9SPI_STACKi_0x303bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fpFISH_MAP__FP9SPI_STACKi_0x303bb0");
#endif

    switch (ctx->pc) {
        case 0x303c0cu: goto label_303c0c;
        case 0x303c18u: goto label_303c18;
        case 0x303c30u: goto label_303c30;
        default: break;
    }

    ctx->pc = 0x303bb0u;

    // 0x303bb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x303bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x303bb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x303bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x303bb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x303bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x303bbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x303bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x303bc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x303bc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303bc4: 0x8f84a100  lw          $a0, -0x5F00($gp)
    ctx->pc = 0x303bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942976)));
    // 0x303bc8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x303bc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303bcc: 0x8f82a0f0  lw          $v0, -0x5F10($gp)
    ctx->pc = 0x303bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942960)));
    // 0x303bd0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x303bd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x303bd4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x303BD4u;
    {
        const bool branch_taken_0x303bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x303BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303BD4u;
            // 0x303bd8: 0xaf80a0fc  sw          $zero, -0x5F04($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942972), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303bd4) {
            ctx->pc = 0x303BE4u;
            goto label_303be4;
        }
    }
    ctx->pc = 0x303BDCu;
    // 0x303bdc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x303BDCu;
    {
        const bool branch_taken_0x303bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303BDCu;
            // 0x303be0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303bdc) {
            ctx->pc = 0x303C3Cu;
            goto label_303c3c;
        }
    }
    ctx->pc = 0x303BE4u;
label_303be4:
    // 0x303be4: 0x8f82a0f4  lw          $v0, -0x5F0C($gp)
    ctx->pc = 0x303be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942964)));
    // 0x303be8: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x303be8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x303bec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x303becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x303bf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x303bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303bf4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x303bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x303bf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x303bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x303bfc: 0xaf82a0fc  sw          $v0, -0x5F04($gp)
    ctx->pc = 0x303bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942972), GPR_U32(ctx, 2));
    // 0x303c00: 0x8f84a0fc  lw          $a0, -0x5F04($gp)
    ctx->pc = 0x303c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942972)));
    // 0x303c04: 0xc049c86  jal         func_127218
    ctx->pc = 0x303C04u;
    SET_GPR_U32(ctx, 31, 0x303C0Cu);
    ctx->pc = 0x303C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303C04u;
            // 0x303c08: 0x24060088  addiu       $a2, $zero, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303C0Cu; }
        if (ctx->pc != 0x303C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303C0Cu; }
        if (ctx->pc != 0x303C0Cu) { return; }
    }
    ctx->pc = 0x303C0Cu;
label_303c0c:
    // 0x303c0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x303c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303c10: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x303C10u;
    SET_GPR_U32(ctx, 31, 0x303C18u);
    ctx->pc = 0x303C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303C10u;
            // 0x303c14: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303C18u; }
        if (ctx->pc != 0x303C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303C18u; }
        if (ctx->pc != 0x303C18u) { return; }
    }
    ctx->pc = 0x303C18u;
label_303c18:
    // 0x303c18: 0x8f84a0fc  lw          $a0, -0x5F04($gp)
    ctx->pc = 0x303c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942972)));
    // 0x303c1c: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x303c1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x303c20: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x303C20u;
    {
        const bool branch_taken_0x303c20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x303C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303C20u;
            // 0x303c24: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303c20) {
            ctx->pc = 0x303C38u;
            goto label_303c38;
        }
    }
    ctx->pc = 0x303C28u;
    // 0x303c28: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x303C28u;
    SET_GPR_U32(ctx, 31, 0x303C30u);
    ctx->pc = 0x303C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303C28u;
            // 0x303c2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303C30u; }
        if (ctx->pc != 0x303C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303C30u; }
        if (ctx->pc != 0x303C30u) { return; }
    }
    ctx->pc = 0x303C30u;
label_303c30:
    // 0x303c30: 0x8f83a0fc  lw          $v1, -0x5F04($gp)
    ctx->pc = 0x303c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942972)));
    // 0x303c34: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x303c34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_303c38:
    // 0x303c38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x303c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_303c3c:
    // 0x303c3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x303c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x303c40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x303c40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x303c44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x303c44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x303c48: 0x3e00008  jr          $ra
    ctx->pc = 0x303C48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303C48u;
            // 0x303c4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303C50u;
}
