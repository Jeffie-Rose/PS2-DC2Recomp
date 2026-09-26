#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadPCPFile__11CMdsListSetFPcPUiP9mgCMemoryi
// Address: 0x168ce0 - 0x168de8
void LoadPCPFile__11CMdsListSetFPcPUiP9mgCMemoryi_0x168ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadPCPFile__11CMdsListSetFPcPUiP9mgCMemoryi_0x168ce0");
#endif

    switch (ctx->pc) {
        case 0x168d24u: goto label_168d24;
        case 0x168d48u: goto label_168d48;
        case 0x168dc4u: goto label_168dc4;
        default: break;
    }

    ctx->pc = 0x168ce0u;

    // 0x168ce0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x168ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x168ce4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x168ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x168ce8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x168ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x168cec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x168cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x168cf0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x168cf0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168cf4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x168cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x168cf8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x168cf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168cfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x168cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x168d00: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x168d00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168d04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x168d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x168d08: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x168d08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168d0c: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x168D0Cu;
    {
        const bool branch_taken_0x168d0c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x168D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168D0Cu;
            // 0x168d10: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d0c) {
            ctx->pc = 0x168D1Cu;
            goto label_168d1c;
        }
    }
    ctx->pc = 0x168D14u;
    // 0x168d14: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x168D14u;
    {
        const bool branch_taken_0x168d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168D14u;
            // 0x168d18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d14) {
            ctx->pc = 0x168DC8u;
            goto label_168dc8;
        }
    }
    ctx->pc = 0x168D1Cu;
label_168d1c:
    // 0x168d1c: 0xc05a2e0  jal         func_168B80
    ctx->pc = 0x168D1Cu;
    SET_GPR_U32(ctx, 31, 0x168D24u);
    ctx->pc = 0x168B80u;
    if (runtime->hasFunction(0x168B80u)) {
        auto targetFn = runtime->lookupFunction(0x168B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168D24u; }
        if (ctx->pc != 0x168D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMdsList__11CMdsListSetFPc_0x168b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168D24u; }
        if (ctx->pc != 0x168D24u) { return; }
    }
    ctx->pc = 0x168D24u;
label_168d24:
    // 0x168d24: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x168D24u;
    {
        const bool branch_taken_0x168d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168D24u;
            // 0x168d28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d24) {
            ctx->pc = 0x168D34u;
            goto label_168d34;
        }
    }
    ctx->pc = 0x168D2Cu;
    // 0x168d2c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x168D2Cu;
    {
        const bool branch_taken_0x168d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168D2Cu;
            // 0x168d30: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d2c) {
            ctx->pc = 0x168DCCu;
            goto label_168dcc;
        }
    }
    ctx->pc = 0x168D34u;
label_168d34:
    // 0x168d34: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x168d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x168d38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x168d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168d3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x168d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168d40: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x168D40u;
    {
        const bool branch_taken_0x168d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168D40u;
            // 0x168d44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d40) {
            ctx->pc = 0x168D98u;
            goto label_168d98;
        }
    }
    ctx->pc = 0x168D48u;
label_168d48:
    // 0x168d48: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x168d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x168d4c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x168d4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x168d50: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x168d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x168d54: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x168D54u;
    {
        const bool branch_taken_0x168d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x168d54) {
            ctx->pc = 0x168D68u;
            goto label_168d68;
        }
    }
    ctx->pc = 0x168D5Cu;
    // 0x168d5c: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x168d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x168d60: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x168d60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x168d64: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x168d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_168d68:
    // 0x168d68: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x168D68u;
    {
        const bool branch_taken_0x168d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x168d68) {
            ctx->pc = 0x168D7Cu;
            goto label_168d7c;
        }
    }
    ctx->pc = 0x168D70u;
    // 0x168d70: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x168d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x168d74: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x168d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x168d78: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x168d78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_168d7c:
    // 0x168d7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x168d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x168d80: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x168D80u;
    {
        const bool branch_taken_0x168d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168d80) {
            ctx->pc = 0x168D8Cu;
            goto label_168d8c;
        }
    }
    ctx->pc = 0x168D88u;
    // 0x168d88: 0x24e40010  addiu       $a0, $a3, 0x10
    ctx->pc = 0x168d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_168d8c:
    // 0x168d8c: 0x0  nop
    ctx->pc = 0x168d8cu;
    // NOP
    // 0x168d90: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x168d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x168d94: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x168d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_168d98:
    // 0x168d98: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x168d98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x168d9c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x168D9Cu;
    {
        const bool branch_taken_0x168d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x168DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168D9Cu;
            // 0x168da0: 0x2863821  addu        $a3, $s4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d9c) {
            ctx->pc = 0x168D48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_168d48;
        }
    }
    ctx->pc = 0x168DA4u;
    // 0x168da4: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x168DA4u;
    {
        const bool branch_taken_0x168da4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x168DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168DA4u;
            // 0x168da8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168da4) {
            ctx->pc = 0x168DB4u;
            goto label_168db4;
        }
    }
    ctx->pc = 0x168DACu;
    // 0x168dac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x168DACu;
    {
        const bool branch_taken_0x168dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168DACu;
            // 0x168db0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168dac) {
            ctx->pc = 0x168DC8u;
            goto label_168dc8;
        }
    }
    ctx->pc = 0x168DB4u;
label_168db4:
    // 0x168db4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x168db4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168db8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x168db8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168dbc: 0xc05a5ac  jal         func_1696B0
    ctx->pc = 0x168DBCu;
    SET_GPR_U32(ctx, 31, 0x168DC4u);
    ctx->pc = 0x168DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168DBCu;
            // 0x168dc0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1696B0u;
    if (runtime->hasFunction(0x1696B0u)) {
        auto targetFn = runtime->lookupFunction(0x1696B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168DC4u; }
        if (ctx->pc != 0x168DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadPCPFile__8CMdsListFPcPUiP9mgCMemoryi_0x1696b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168DC4u; }
        if (ctx->pc != 0x168DC4u) { return; }
    }
    ctx->pc = 0x168DC4u;
label_168dc4:
    // 0x168dc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x168dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_168dc8:
    // 0x168dc8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x168dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_168dcc:
    // 0x168dcc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x168dccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x168dd0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x168dd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x168dd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x168dd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168dd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x168dd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168ddc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x168ddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168de0: 0x3e00008  jr          $ra
    ctx->pc = 0x168DE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168DE0u;
            // 0x168de4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168DE8u;
}
