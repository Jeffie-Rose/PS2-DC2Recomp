#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ITEM__FP9SPI_STACKi
// Address: 0x28dc80 - 0x28dde0
void ps2__ITEM__FP9SPI_STACKi_0x28dc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ITEM__FP9SPI_STACKi_0x28dc80");
#endif

    switch (ctx->pc) {
        case 0x28dcacu: goto label_28dcac;
        case 0x28dcb4u: goto label_28dcb4;
        case 0x28dcc4u: goto label_28dcc4;
        case 0x28dcd4u: goto label_28dcd4;
        default: break;
    }

    ctx->pc = 0x28dc80u;

    // 0x28dc80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28dc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x28dc84: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x28dc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x28dc88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28dc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28dc8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28dc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28dc90: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x28dc90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28dc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28dc98: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x28dc98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28dc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28dca0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28dca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28dca4: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x28DCA4u;
    {
        const bool branch_taken_0x28dca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DCA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DCA4u;
            // 0x28dca8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dca4) {
            ctx->pc = 0x28DD8Cu;
            goto label_28dd8c;
        }
    }
    ctx->pc = 0x28DCACu;
label_28dcac:
    // 0x28dcac: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x28DCACu;
    SET_GPR_U32(ctx, 31, 0x28DCB4u);
    ctx->pc = 0x28DCB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28DCACu;
            // 0x28dcb0: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DCB4u; }
        if (ctx->pc != 0x28DCB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DCB4u; }
        if (ctx->pc != 0x28DCB4u) { return; }
    }
    ctx->pc = 0x28DCB4u;
label_28dcb4:
    // 0x28dcb4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28dcb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dcb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28dcb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dcbc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x28DCBCu;
    SET_GPR_U32(ctx, 31, 0x28DCC4u);
    ctx->pc = 0x28DCC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28DCBCu;
            // 0x28dcc0: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DCC4u; }
        if (ctx->pc != 0x28DCC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DCC4u; }
        if (ctx->pc != 0x28DCC4u) { return; }
    }
    ctx->pc = 0x28DCC4u;
label_28dcc4:
    // 0x28dcc4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28dcc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dcc8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28dcc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dccc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x28DCCCu;
    SET_GPR_U32(ctx, 31, 0x28DCD4u);
    ctx->pc = 0x28DCD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28DCCCu;
            // 0x28dcd0: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DCD4u; }
        if (ctx->pc != 0x28DCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DCD4u; }
        if (ctx->pc != 0x28DCD4u) { return; }
    }
    ctx->pc = 0x28DCD4u;
label_28dcd4:
    // 0x28dcd4: 0x8f879830  lw          $a3, -0x67D0($gp)
    ctx->pc = 0x28dcd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940720)));
    // 0x28dcd8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28dcd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28dcdc: 0x8f849834  lw          $a0, -0x67CC($gp)
    ctx->pc = 0x28dcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940724)));
    // 0x28dce0: 0x8f85982c  lw          $a1, -0x67D4($gp)
    ctx->pc = 0x28dce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940716)));
    // 0x28dce4: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x28dce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x28dce8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x28dce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x28dcec: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x28dcecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28dcf0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x28dcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x28dcf4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x28dcf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x28dcf8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28dcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28dcfc: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x28dcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x28dd00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28dd00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28dd04: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x28dd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x28dd08: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x28dd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x28dd0c: 0xac71000c  sw          $s1, 0xC($v1)
    ctx->pc = 0x28dd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 17));
    // 0x28dd10: 0x8f879830  lw          $a3, -0x67D0($gp)
    ctx->pc = 0x28dd10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940720)));
    // 0x28dd14: 0x8f849834  lw          $a0, -0x67CC($gp)
    ctx->pc = 0x28dd14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940724)));
    // 0x28dd18: 0x8f85982c  lw          $a1, -0x67D4($gp)
    ctx->pc = 0x28dd18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940716)));
    // 0x28dd1c: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x28dd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x28dd20: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x28dd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x28dd24: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x28dd24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28dd28: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x28dd28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x28dd2c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x28dd2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x28dd30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28dd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28dd34: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x28dd34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x28dd38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28dd38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28dd3c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x28dd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x28dd40: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x28dd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x28dd44: 0xac720010  sw          $s2, 0x10($v1)
    ctx->pc = 0x28dd44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 18));
    // 0x28dd48: 0x8f879830  lw          $a3, -0x67D0($gp)
    ctx->pc = 0x28dd48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940720)));
    // 0x28dd4c: 0x8f849834  lw          $a0, -0x67CC($gp)
    ctx->pc = 0x28dd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940724)));
    // 0x28dd50: 0x8f85982c  lw          $a1, -0x67D4($gp)
    ctx->pc = 0x28dd50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940716)));
    // 0x28dd54: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x28dd54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x28dd58: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x28dd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x28dd5c: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x28dd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28dd60: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x28dd60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x28dd64: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x28dd64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x28dd68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28dd68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28dd6c: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x28dd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x28dd70: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28dd70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28dd74: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x28dd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x28dd78: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x28dd78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x28dd7c: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x28dd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x28dd80: 0x8f829834  lw          $v0, -0x67CC($gp)
    ctx->pc = 0x28dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940724)));
    // 0x28dd84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28dd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28dd88: 0xaf829834  sw          $v0, -0x67CC($gp)
    ctx->pc = 0x28dd88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940724), GPR_U32(ctx, 2));
label_28dd8c:
    // 0x28dd8c: 0x0  nop
    ctx->pc = 0x28dd8cu;
    // NOP
    // 0x28dd90: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x28dd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x28dd94: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x28dd94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x28dd98: 0x131fc2  srl         $v1, $s3, 31
    ctx->pc = 0x28dd98u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 31));
    // 0x28dd9c: 0x530018  mult        $zero, $v0, $s3
    ctx->pc = 0x28dd9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x28dda0: 0x0  nop
    ctx->pc = 0x28dda0u;
    // NOP
    // 0x28dda4: 0x0  nop
    ctx->pc = 0x28dda4u;
    // NOP
    // 0x28dda8: 0x1010  mfhi        $v0
    ctx->pc = 0x28dda8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x28ddac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28ddb0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x28ddb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28ddb4: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x28DDB4u;
    {
        const bool branch_taken_0x28ddb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DDB4u;
            // 0x28ddb8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ddb4) {
            ctx->pc = 0x28DCACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28dcac;
        }
    }
    ctx->pc = 0x28DDBCu;
    // 0x28ddbc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28ddbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28ddc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ddc4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28ddc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28ddc8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28ddc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28ddcc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28ddccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28ddd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28ddd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ddd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28ddd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ddd8: 0x3e00008  jr          $ra
    ctx->pc = 0x28DDD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DDD8u;
            // 0x28dddc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28DDE0u;
}
