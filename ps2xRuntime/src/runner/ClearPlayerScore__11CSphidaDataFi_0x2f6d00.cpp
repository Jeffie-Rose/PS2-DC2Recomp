#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ClearPlayerScore__11CSphidaDataFi
// Address: 0x2f6d00 - 0x2f6db4
void ClearPlayerScore__11CSphidaDataFi_0x2f6d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearPlayerScore__11CSphidaDataFi_0x2f6d00");
#endif

    switch (ctx->pc) {
        case 0x2f6d54u: goto label_2f6d54;
        case 0x2f6d60u: goto label_2f6d60;
        case 0x2f6d70u: goto label_2f6d70;
        case 0x2f6d90u: goto label_2f6d90;
        case 0x2f6d9cu: goto label_2f6d9c;
        default: break;
    }

    ctx->pc = 0x2f6d00u;

label_2f6d00:
    // 0x2f6d00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f6d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f6d04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f6d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f6d08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f6d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f6d0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f6d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f6d10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f6d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f6d14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f6d14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6d18: 0x6000020  bltz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2F6D18u;
    {
        const bool branch_taken_0x2f6d18 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2F6D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6D18u;
            // 0x2f6d1c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6d18) {
            ctx->pc = 0x2F6D9Cu;
            goto label_2f6d9c;
        }
    }
    ctx->pc = 0x2F6D20u;
    // 0x2f6d20: 0x2a030040  slti        $v1, $s0, 0x40
    ctx->pc = 0x2f6d20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2f6d24: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F6D24u;
    {
        const bool branch_taken_0x2f6d24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6d24) {
            ctx->pc = 0x2F6D34u;
            goto label_2f6d34;
        }
    }
    ctx->pc = 0x2F6D2Cu;
    // 0x2f6d2c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2F6D2Cu;
    {
        const bool branch_taken_0x2f6d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6D2Cu;
            // 0x2f6d30: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6d2c) {
            ctx->pc = 0x2F6DA0u;
            goto label_2f6da0;
        }
    }
    ctx->pc = 0x2F6D34u;
label_2f6d34:
    // 0x2f6d34: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2f6d34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2f6d38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f6d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6d3c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2f6d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2f6d40: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x2f6d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2f6d44: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2f6d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2f6d48: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2f6d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2f6d4c: 0xc049c86  jal         func_127218
    ctx->pc = 0x2F6D4Cu;
    SET_GPR_U32(ctx, 31, 0x2F6D54u);
    ctx->pc = 0x2F6D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6D4Cu;
            // 0x2f6d50: 0x24440048  addiu       $a0, $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6D54u; }
        if (ctx->pc != 0x2F6D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6D54u; }
        if (ctx->pc != 0x2F6D54u) { return; }
    }
    ctx->pc = 0x2F6D54u;
label_2f6d54:
    // 0x2f6d54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f6d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6d58: 0xc0bdbd8  jal         func_2F6F60
    ctx->pc = 0x2F6D58u;
    SET_GPR_U32(ctx, 31, 0x2F6D60u);
    ctx->pc = 0x2F6D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6D58u;
            // 0x2f6d5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6F60u;
    if (runtime->hasFunction(0x2F6F60u)) {
        auto targetFn = runtime->lookupFunction(0x2F6F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6D60u; }
        if (ctx->pc != 0x2F6D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerData__11CSphidaDataFi_0x2f6f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6D60u; }
        if (ctx->pc != 0x2F6D60u) { return; }
    }
    ctx->pc = 0x2F6D60u;
label_2f6d60:
    // 0x2f6d60: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f6d60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6d64: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x2f6d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2f6d68: 0xc0bdbd8  jal         func_2F6F60
    ctx->pc = 0x2F6D68u;
    SET_GPR_U32(ctx, 31, 0x2F6D70u);
    ctx->pc = 0x2F6D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6D68u;
            // 0x2f6d6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6F60u;
    if (runtime->hasFunction(0x2F6F60u)) {
        auto targetFn = runtime->lookupFunction(0x2F6F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6D70u; }
        if (ctx->pc != 0x2F6D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerData__11CSphidaDataFi_0x2f6f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6D70u; }
        if (ctx->pc != 0x2F6D70u) { return; }
    }
    ctx->pc = 0x2F6D70u;
label_2f6d70:
    // 0x2f6d70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f6d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6d74: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F6D74u;
    {
        const bool branch_taken_0x2f6d74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6d74) {
            ctx->pc = 0x2F6D9Cu;
            goto label_2f6d9c;
        }
    }
    ctx->pc = 0x2F6D7Cu;
    // 0x2f6d7c: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F6D7Cu;
    {
        const bool branch_taken_0x2f6d7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6d7c) {
            ctx->pc = 0x2F6D9Cu;
            goto label_2f6d9c;
        }
    }
    ctx->pc = 0x2F6D84u;
    // 0x2f6d84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f6d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6d88: 0xc049c18  jal         func_127060
    ctx->pc = 0x2F6D88u;
    SET_GPR_U32(ctx, 31, 0x2F6D90u);
    ctx->pc = 0x2F6D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6D88u;
            // 0x2f6d8c: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6D90u; }
        if (ctx->pc != 0x2F6D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6D90u; }
        if (ctx->pc != 0x2F6D90u) { return; }
    }
    ctx->pc = 0x2F6D90u;
label_2f6d90:
    // 0x2f6d90: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x2f6d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2f6d94: 0xc0bdb40  jal         func_2F6D00
    ctx->pc = 0x2F6D94u;
    SET_GPR_U32(ctx, 31, 0x2F6D9Cu);
    ctx->pc = 0x2F6D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6D94u;
            // 0x2f6d98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6D00u;
    goto label_2f6d00;
    ctx->pc = 0x2F6D9Cu;
label_2f6d9c:
    // 0x2f6d9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f6d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f6da0:
    // 0x2f6da0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f6da0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f6da4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f6da4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f6da8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f6da8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6dac: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6DACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6DACu;
            // 0x2f6db0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F6DB4u;
}
