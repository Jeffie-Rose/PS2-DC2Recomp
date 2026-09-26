#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GROUP__FP9SPI_STACKi
// Address: 0x28dbc0 - 0x28dc80
void ps2__GROUP__FP9SPI_STACKi_0x28dbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GROUP__FP9SPI_STACKi_0x28dbc0");
#endif

    switch (ctx->pc) {
        case 0x28dbd4u: goto label_28dbd4;
        case 0x28dbe0u: goto label_28dbe0;
        default: break;
    }

    ctx->pc = 0x28dbc0u;

    // 0x28dbc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28dbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28dbc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28dbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28dbc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28dbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28dbcc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x28DBCCu;
    SET_GPR_U32(ctx, 31, 0x28DBD4u);
    ctx->pc = 0x28DBD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28DBCCu;
            // 0x28dbd0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DBD4u; }
        if (ctx->pc != 0x28DBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DBD4u; }
        if (ctx->pc != 0x28DBD4u) { return; }
    }
    ctx->pc = 0x28DBD4u;
label_28dbd4:
    // 0x28dbd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28dbd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dbd8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x28DBD8u;
    SET_GPR_U32(ctx, 31, 0x28DBE0u);
    ctx->pc = 0x28DBDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28DBD8u;
            // 0x28dbdc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DBE0u; }
        if (ctx->pc != 0x28DBE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DBE0u; }
        if (ctx->pc != 0x28DBE0u) { return; }
    }
    ctx->pc = 0x28DBE0u;
label_28dbe0:
    // 0x28dbe0: 0x8f83982c  lw          $v1, -0x67D4($gp)
    ctx->pc = 0x28dbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940716)));
    // 0x28dbe4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x28dbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x28dbe8: 0x34842204  ori         $a0, $a0, 0x2204
    ctx->pc = 0x28dbe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8708);
    // 0x28dbec: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x28dbecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x28dbf0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x28dbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28dbf4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x28dbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28dbf8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28dbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28dbfc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x28dbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x28dc00: 0x8f85982c  lw          $a1, -0x67D4($gp)
    ctx->pc = 0x28dc00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940716)));
    // 0x28dc04: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x28dc04u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x28dc08: 0x8c242204  lw          $a0, 0x2204($at)
    ctx->pc = 0x28dc08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8708)));
    // 0x28dc0c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x28dc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x28dc10: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x28dc10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x28dc14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28dc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28dc18: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x28dc18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28dc1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28dc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28dc20: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28dc20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28dc24: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x28dc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x28dc28: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x28dc28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    // 0x28dc2c: 0x8f85982c  lw          $a1, -0x67D4($gp)
    ctx->pc = 0x28dc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940716)));
    // 0x28dc30: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x28dc30u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x28dc34: 0x8c242204  lw          $a0, 0x2204($at)
    ctx->pc = 0x28dc34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8708)));
    // 0x28dc38: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x28dc38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x28dc3c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x28dc3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x28dc40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28dc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28dc44: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x28dc44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28dc48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28dc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28dc4c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28dc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28dc50: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x28dc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x28dc54: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x28dc54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x28dc58: 0x8f83982c  lw          $v1, -0x67D4($gp)
    ctx->pc = 0x28dc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940716)));
    // 0x28dc5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28dc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28dc60: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x28dc60u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x28dc64: 0x8c232204  lw          $v1, 0x2204($at)
    ctx->pc = 0x28dc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8708)));
    // 0x28dc68: 0xaf839830  sw          $v1, -0x67D0($gp)
    ctx->pc = 0x28dc68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940720), GPR_U32(ctx, 3));
    // 0x28dc6c: 0xaf809834  sw          $zero, -0x67CC($gp)
    ctx->pc = 0x28dc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940724), GPR_U32(ctx, 0));
    // 0x28dc70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28dc70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28dc74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28dc74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28dc78: 0x3e00008  jr          $ra
    ctx->pc = 0x28DC78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DC78u;
            // 0x28dc7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28DC80u;
}
