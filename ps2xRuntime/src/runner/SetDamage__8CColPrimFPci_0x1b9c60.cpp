#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetDamage__8CColPrimFPci
// Address: 0x1b9c60 - 0x1b9d78
void SetDamage__8CColPrimFPci_0x1b9c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetDamage__8CColPrimFPci_0x1b9c60");
#endif

    switch (ctx->pc) {
        case 0x1b9c94u: goto label_1b9c94;
        case 0x1b9cb0u: goto label_1b9cb0;
        case 0x1b9cc0u: goto label_1b9cc0;
        case 0x1b9d08u: goto label_1b9d08;
        default: break;
    }

    ctx->pc = 0x1b9c60u;

    // 0x1b9c60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b9c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b9c64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1b9c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1b9c68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b9c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b9c6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b9c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b9c70: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1b9c70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9c74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b9c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b9c78: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b9c78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9c7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b9c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b9c80: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b9c80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9c84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b9c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b9c88: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b9c88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9c8c: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1b9c8cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1b9c90: 0x26106b50  addiu       $s0, $s0, 0x6B50
    ctx->pc = 0x1b9c90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27472));
label_1b9c94:
    // 0x1b9c94: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1b9c94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b9c98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B9C98u;
    {
        const bool branch_taken_0x1b9c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9C98u;
            // 0x1b9c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9c98) {
            ctx->pc = 0x1B9CA8u;
            goto label_1b9ca8;
        }
    }
    ctx->pc = 0x1B9CA0u;
    // 0x1b9ca0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1B9CA0u;
    {
        const bool branch_taken_0x1b9ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9CA0u;
            // 0x1b9ca4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9ca0) {
            ctx->pc = 0x1B9D54u;
            goto label_1b9d54;
        }
    }
    ctx->pc = 0x1B9CA8u;
label_1b9ca8:
    // 0x1b9ca8: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x1B9CA8u;
    SET_GPR_U32(ctx, 31, 0x1B9CB0u);
    ctx->pc = 0x1B9CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9CA8u;
            // 0x1b9cac: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9CB0u; }
        if (ctx->pc != 0x1B9CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9CB0u; }
        if (ctx->pc != 0x1B9CB0u) { return; }
    }
    ctx->pc = 0x1B9CB0u;
label_1b9cb0:
    // 0x1b9cb0: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1B9CB0u;
    {
        const bool branch_taken_0x1b9cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9CB0u;
            // 0x1b9cb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9cb0) {
            ctx->pc = 0x1B9D48u;
            goto label_1b9d48;
        }
    }
    ctx->pc = 0x1B9CB8u;
    // 0x1b9cb8: 0xc06e9b0  jal         func_1BA6C0
    ctx->pc = 0x1B9CB8u;
    SET_GPR_U32(ctx, 31, 0x1B9CC0u);
    ctx->pc = 0x1BA6C0u;
    if (runtime->hasFunction(0x1BA6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1BA6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9CC0u; }
        if (ctx->pc != 0x1B9CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__8CColPrimFv_0x1ba6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9CC0u; }
        if (ctx->pc != 0x1B9CC0u) { return; }
    }
    ctx->pc = 0x1B9CC0u;
label_1b9cc0:
    // 0x1b9cc0: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1b9cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x1b9cc4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1b9cc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9cc8: 0xae48000c  sw          $t0, 0xC($s2)
    ctx->pc = 0x1b9cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 8));
    // 0x1b9ccc: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x1b9cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x1b9cd0: 0xae500008  sw          $s0, 0x8($s2)
    ctx->pc = 0x1b9cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
    // 0x1b9cd4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b9cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b9cd8: 0xae510010  sw          $s1, 0x10($s2)
    ctx->pc = 0x1b9cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
    // 0x1b9cdc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1b9cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1b9ce0: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x1b9ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1b9ce4: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x1b9ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x1b9ce8: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1b9ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1b9cec: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1b9cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1b9cf0: 0xae470088  sw          $a3, 0x88($s2)
    ctx->pc = 0x1b9cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 7));
    // 0x1b9cf4: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x1b9cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
    // 0x1b9cf8: 0xae480030  sw          $t0, 0x30($s2)
    ctx->pc = 0x1b9cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 8));
    // 0x1b9cfc: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x1b9cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
    // 0x1b9d00: 0xc049c18  jal         func_127060
    ctx->pc = 0x1B9D00u;
    SET_GPR_U32(ctx, 31, 0x1B9D08u);
    ctx->pc = 0x1B9D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9D00u;
            // 0x1b9d04: 0xae4200a4  sw          $v0, 0xA4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9D08u; }
        if (ctx->pc != 0x1B9D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9D08u; }
        if (ctx->pc != 0x1B9D08u) { return; }
    }
    ctx->pc = 0x1B9D08u;
label_1b9d08:
    // 0x1b9d08: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x1b9d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1b9d0c: 0xae4200a0  sw          $v0, 0xA0($s2)
    ctx->pc = 0x1b9d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
    // 0x1b9d10: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1b9d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1b9d14: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1b9d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1b9d18: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B9D18u;
    {
        const bool branch_taken_0x1b9d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9d18) {
            ctx->pc = 0x1B9D3Cu;
            goto label_1b9d3c;
        }
    }
    ctx->pc = 0x1B9D20u;
    // 0x1b9d20: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9D20u;
    {
        const bool branch_taken_0x1b9d20 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9D20u;
            // 0x1b9d24: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9d20) {
            ctx->pc = 0x1B9D34u;
            goto label_1b9d34;
        }
    }
    ctx->pc = 0x1B9D28u;
    // 0x1b9d28: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b9d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b9d2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9D2Cu;
    {
        const bool branch_taken_0x1b9d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9D2Cu;
            // 0x1b9d30: 0xae420080  sw          $v0, 0x80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9d2c) {
            ctx->pc = 0x1B9D40u;
            goto label_1b9d40;
        }
    }
    ctx->pc = 0x1B9D34u;
label_1b9d34:
    // 0x1b9d34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B9D34u;
    {
        const bool branch_taken_0x1b9d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9D34u;
            // 0x1b9d38: 0xae420080  sw          $v0, 0x80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9d34) {
            ctx->pc = 0x1B9D40u;
            goto label_1b9d40;
        }
    }
    ctx->pc = 0x1B9D3Cu;
label_1b9d3c:
    // 0x1b9d3c: 0xae430080  sw          $v1, 0x80($s2)
    ctx->pc = 0x1b9d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 3));
label_1b9d40:
    // 0x1b9d40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9D40u;
    {
        const bool branch_taken_0x1b9d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9D40u;
            // 0x1b9d44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9d40) {
            ctx->pc = 0x1B9D54u;
            goto label_1b9d54;
        }
    }
    ctx->pc = 0x1B9D48u;
label_1b9d48:
    // 0x1b9d48: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1b9d48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1b9d4c: 0x1000ffd1  b           . + 4 + (-0x2F << 2)
    ctx->pc = 0x1B9D4Cu;
    {
        const bool branch_taken_0x1b9d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9D4Cu;
            // 0x1b9d50: 0x26100048  addiu       $s0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9d4c) {
            ctx->pc = 0x1B9C94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b9c94;
        }
    }
    ctx->pc = 0x1B9D54u;
label_1b9d54:
    // 0x1b9d54: 0x0  nop
    ctx->pc = 0x1b9d54u;
    // NOP
    // 0x1b9d58: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1b9d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b9d5c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b9d5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b9d60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b9d60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b9d64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b9d64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9d68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b9d68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9d6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b9d6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9d70: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9D70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9D70u;
            // 0x1b9d74: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9D78u;
}
