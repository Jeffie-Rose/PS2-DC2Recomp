#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Omake_SetUp__7CSphidaFii
// Address: 0x2e9ca0 - 0x2ea018
void Omake_SetUp__7CSphidaFii_0x2e9ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Omake_SetUp__7CSphidaFii_0x2e9ca0");
#endif

    switch (ctx->pc) {
        case 0x2e9f48u: goto label_2e9f48;
        case 0x2e9f50u: goto label_2e9f50;
        case 0x2e9f8cu: goto label_2e9f8c;
        case 0x2e9f94u: goto label_2e9f94;
        case 0x2e9fd0u: goto label_2e9fd0;
        case 0x2e9fecu: goto label_2e9fec;
        case 0x2e9ff8u: goto label_2e9ff8;
        default: break;
    }

    ctx->pc = 0x2e9ca0u;

    // 0x2e9ca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e9ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e9ca4: 0x2ca10009  sltiu       $at, $a1, 0x9
    ctx->pc = 0x2e9ca4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2e9ca8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e9ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e9cac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e9cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e9cb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e9cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e9cb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e9cb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9cb8: 0x102000d2  beqz        $at, . + 4 + (0xD2 << 2)
    ctx->pc = 0x2E9CB8u;
    {
        const bool branch_taken_0x2e9cb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9CB8u;
            // 0x2e9cbc: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9cb8) {
            ctx->pc = 0x2EA004u;
            goto label_2ea004;
        }
    }
    ctx->pc = 0x2E9CC0u;
    // 0x2e9cc0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2e9cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2e9cc4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2e9cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2e9cc8: 0x248414d0  addiu       $a0, $a0, 0x14D0
    ctx->pc = 0x2e9cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5328));
    // 0x2e9ccc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e9cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e9cd0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2e9cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e9cd4: 0x600008  jr          $v1
    ctx->pc = 0x2E9CD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E9CDCu: goto label_2e9cdc;
            case 0x2E9D1Cu: goto label_2e9d1c;
            case 0x2E9D60u: goto label_2e9d60;
            case 0x2E9DA4u: goto label_2e9da4;
            case 0x2E9DE4u: goto label_2e9de4;
            case 0x2E9E2Cu: goto label_2e9e2c;
            case 0x2E9E70u: goto label_2e9e70;
            case 0x2E9EB0u: goto label_2e9eb0;
            case 0x2E9EF4u: goto label_2e9ef4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2E9CDCu;
label_2e9cdc:
    // 0x2e9cdc: 0xae200090  sw          $zero, 0x90($s1)
    ctx->pc = 0x2e9cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
    // 0x2e9ce0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2e9ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2e9ce4: 0xae220094  sw          $v0, 0x94($s1)
    ctx->pc = 0x2e9ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
    // 0x2e9ce8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2e9ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2e9cec: 0xae200098  sw          $zero, 0x98($s1)
    ctx->pc = 0x2e9cecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
    // 0x2e9cf0: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x2e9cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x2e9cf4: 0xae24009c  sw          $a0, 0x9C($s1)
    ctx->pc = 0x2e9cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 4));
    // 0x2e9cf8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2e9cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2e9cfc: 0xae2300a0  sw          $v1, 0xA0($s1)
    ctx->pc = 0x2e9cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 3));
    // 0x2e9d00: 0xae2200a4  sw          $v0, 0xA4($s1)
    ctx->pc = 0x2e9d00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
    // 0x2e9d04: 0x3c0344a0  lui         $v1, 0x44A0
    ctx->pc = 0x2e9d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17568 << 16));
    // 0x2e9d08: 0xae2300a8  sw          $v1, 0xA8($s1)
    ctx->pc = 0x2e9d08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 3));
    // 0x2e9d0c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e9d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e9d10: 0xae2400ac  sw          $a0, 0xAC($s1)
    ctx->pc = 0x2e9d10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 4));
    // 0x2e9d14: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x2E9D14u;
    {
        const bool branch_taken_0x2e9d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9D14u;
            // 0x2e9d18: 0xae2200b8  sw          $v0, 0xB8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9d14) {
            ctx->pc = 0x2E9F3Cu;
            goto label_2e9f3c;
        }
    }
    ctx->pc = 0x2E9D1Cu;
label_2e9d1c:
    // 0x2e9d1c: 0x3c034470  lui         $v1, 0x4470
    ctx->pc = 0x2e9d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17520 << 16));
    // 0x2e9d20: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2e9d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2e9d24: 0xae230090  sw          $v1, 0x90($s1)
    ctx->pc = 0x2e9d24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 3));
    // 0x2e9d28: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x2e9d28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x2e9d2c: 0xae220094  sw          $v0, 0x94($s1)
    ctx->pc = 0x2e9d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
    // 0x2e9d30: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x2e9d30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
    // 0x2e9d34: 0xae230098  sw          $v1, 0x98($s1)
    ctx->pc = 0x2e9d34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 3));
    // 0x2e9d38: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x2e9d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x2e9d3c: 0xae25009c  sw          $a1, 0x9C($s1)
    ctx->pc = 0x2e9d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 5));
    // 0x2e9d40: 0x3c0344f0  lui         $v1, 0x44F0
    ctx->pc = 0x2e9d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17648 << 16));
    // 0x2e9d44: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x2e9d44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
    // 0x2e9d48: 0xae2400a4  sw          $a0, 0xA4($s1)
    ctx->pc = 0x2e9d48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 4));
    // 0x2e9d4c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e9d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e9d50: 0xae2300a8  sw          $v1, 0xA8($s1)
    ctx->pc = 0x2e9d50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 3));
    // 0x2e9d54: 0xae2500ac  sw          $a1, 0xAC($s1)
    ctx->pc = 0x2e9d54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 5));
    // 0x2e9d58: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x2E9D58u;
    {
        const bool branch_taken_0x2e9d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9D58u;
            // 0x2e9d5c: 0xae2200b8  sw          $v0, 0xB8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9d58) {
            ctx->pc = 0x2E9F3Cu;
            goto label_2e9f3c;
        }
    }
    ctx->pc = 0x2E9D60u;
label_2e9d60:
    // 0x2e9d60: 0x3c0644c8  lui         $a2, 0x44C8
    ctx->pc = 0x2e9d60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17608 << 16));
    // 0x2e9d64: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2e9d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2e9d68: 0xae260090  sw          $a2, 0x90($s1)
    ctx->pc = 0x2e9d68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 6));
    // 0x2e9d6c: 0x3c024470  lui         $v0, 0x4470
    ctx->pc = 0x2e9d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17520 << 16));
    // 0x2e9d70: 0xae230094  sw          $v1, 0x94($s1)
    ctx->pc = 0x2e9d70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 3));
    // 0x2e9d74: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x2e9d74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x2e9d78: 0xae220098  sw          $v0, 0x98($s1)
    ctx->pc = 0x2e9d78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
    // 0x2e9d7c: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x2e9d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
    // 0x2e9d80: 0xae25009c  sw          $a1, 0x9C($s1)
    ctx->pc = 0x2e9d80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 5));
    // 0x2e9d84: 0x3c034534  lui         $v1, 0x4534
    ctx->pc = 0x2e9d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17716 << 16));
    // 0x2e9d88: 0xae2600a0  sw          $a2, 0xA0($s1)
    ctx->pc = 0x2e9d88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 6));
    // 0x2e9d8c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e9d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e9d90: 0xae2400a4  sw          $a0, 0xA4($s1)
    ctx->pc = 0x2e9d90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 4));
    // 0x2e9d94: 0xae2300a8  sw          $v1, 0xA8($s1)
    ctx->pc = 0x2e9d94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 3));
    // 0x2e9d98: 0xae2500ac  sw          $a1, 0xAC($s1)
    ctx->pc = 0x2e9d98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 5));
    // 0x2e9d9c: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x2E9D9Cu;
    {
        const bool branch_taken_0x2e9d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9D9Cu;
            // 0x2e9da0: 0xae2200b8  sw          $v0, 0xB8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9d9c) {
            ctx->pc = 0x2E9F3Cu;
            goto label_2e9f3c;
        }
    }
    ctx->pc = 0x2E9DA4u;
label_2e9da4:
    // 0x2e9da4: 0x3c0644a0  lui         $a2, 0x44A0
    ctx->pc = 0x2e9da4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17568 << 16));
    // 0x2e9da8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2e9da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2e9dac: 0xae260090  sw          $a2, 0x90($s1)
    ctx->pc = 0x2e9dacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 6));
    // 0x2e9db0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x2e9db0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x2e9db4: 0xae220094  sw          $v0, 0x94($s1)
    ctx->pc = 0x2e9db4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
    // 0x2e9db8: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x2e9db8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
    // 0x2e9dbc: 0xae200098  sw          $zero, 0x98($s1)
    ctx->pc = 0x2e9dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
    // 0x2e9dc0: 0x3c034570  lui         $v1, 0x4570
    ctx->pc = 0x2e9dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17776 << 16));
    // 0x2e9dc4: 0xae25009c  sw          $a1, 0x9C($s1)
    ctx->pc = 0x2e9dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 5));
    // 0x2e9dc8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e9dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e9dcc: 0xae2600a0  sw          $a2, 0xA0($s1)
    ctx->pc = 0x2e9dccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 6));
    // 0x2e9dd0: 0xae2400a4  sw          $a0, 0xA4($s1)
    ctx->pc = 0x2e9dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 4));
    // 0x2e9dd4: 0xae2300a8  sw          $v1, 0xA8($s1)
    ctx->pc = 0x2e9dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 3));
    // 0x2e9dd8: 0xae2500ac  sw          $a1, 0xAC($s1)
    ctx->pc = 0x2e9dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 5));
    // 0x2e9ddc: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x2E9DDCu;
    {
        const bool branch_taken_0x2e9ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9DDCu;
            // 0x2e9de0: 0xae2200b8  sw          $v0, 0xB8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9ddc) {
            ctx->pc = 0x2E9F3Cu;
            goto label_2e9f3c;
        }
    }
    ctx->pc = 0x2E9DE4u;
label_2e9de4:
    // 0x2e9de4: 0x3c02452f  lui         $v0, 0x452F
    ctx->pc = 0x2e9de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17711 << 16));
    // 0x2e9de8: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2e9de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2e9dec: 0xae220090  sw          $v0, 0x90($s1)
    ctx->pc = 0x2e9decu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 2));
    // 0x2e9df0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2e9df0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2e9df4: 0xae230094  sw          $v1, 0x94($s1)
    ctx->pc = 0x2e9df4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 3));
    // 0x2e9df8: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2e9df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2e9dfc: 0xae220098  sw          $v0, 0x98($s1)
    ctx->pc = 0x2e9dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
    // 0x2e9e00: 0x3c0344c8  lui         $v1, 0x44C8
    ctx->pc = 0x2e9e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17608 << 16));
    // 0x2e9e04: 0xae24009c  sw          $a0, 0x9C($s1)
    ctx->pc = 0x2e9e04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 4));
    // 0x2e9e08: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2e9e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2e9e0c: 0xae2300a0  sw          $v1, 0xA0($s1)
    ctx->pc = 0x2e9e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 3));
    // 0x2e9e10: 0xae2200a4  sw          $v0, 0xA4($s1)
    ctx->pc = 0x2e9e10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
    // 0x2e9e14: 0x3c0345af  lui         $v1, 0x45AF
    ctx->pc = 0x2e9e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17839 << 16));
    // 0x2e9e18: 0xae2300a8  sw          $v1, 0xA8($s1)
    ctx->pc = 0x2e9e18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 3));
    // 0x2e9e1c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2e9e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2e9e20: 0xae2400ac  sw          $a0, 0xAC($s1)
    ctx->pc = 0x2e9e20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 4));
    // 0x2e9e24: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2E9E24u;
    {
        const bool branch_taken_0x2e9e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9E24u;
            // 0x2e9e28: 0xae2200b8  sw          $v0, 0xB8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9e24) {
            ctx->pc = 0x2E9F3Cu;
            goto label_2e9f3c;
        }
    }
    ctx->pc = 0x2E9E2Cu;
label_2e9e2c:
    // 0x2e9e2c: 0xae200090  sw          $zero, 0x90($s1)
    ctx->pc = 0x2e9e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
    // 0x2e9e30: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2e9e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2e9e34: 0xae220094  sw          $v0, 0x94($s1)
    ctx->pc = 0x2e9e34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
    // 0x2e9e38: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2e9e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2e9e3c: 0x3c02457a  lui         $v0, 0x457A
    ctx->pc = 0x2e9e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
    // 0x2e9e40: 0xae220098  sw          $v0, 0x98($s1)
    ctx->pc = 0x2e9e40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
    // 0x2e9e44: 0xae23009c  sw          $v1, 0x9C($s1)
    ctx->pc = 0x2e9e44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 3));
    // 0x2e9e48: 0x3c02452f  lui         $v0, 0x452F
    ctx->pc = 0x2e9e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17711 << 16));
    // 0x2e9e4c: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x2e9e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
    // 0x2e9e50: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2e9e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2e9e54: 0xae2200a4  sw          $v0, 0xA4($s1)
    ctx->pc = 0x2e9e54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
    // 0x2e9e58: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2e9e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2e9e5c: 0xae2200a8  sw          $v0, 0xA8($s1)
    ctx->pc = 0x2e9e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 2));
    // 0x2e9e60: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2e9e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e9e64: 0xae2300ac  sw          $v1, 0xAC($s1)
    ctx->pc = 0x2e9e64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 3));
    // 0x2e9e68: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2E9E68u;
    {
        const bool branch_taken_0x2e9e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9E68u;
            // 0x2e9e6c: 0xae2200b8  sw          $v0, 0xB8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9e68) {
            ctx->pc = 0x2E9F3Cu;
            goto label_2e9f3c;
        }
    }
    ctx->pc = 0x2E9E70u;
label_2e9e70:
    // 0x2e9e70: 0x3c0344c8  lui         $v1, 0x44C8
    ctx->pc = 0x2e9e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17608 << 16));
    // 0x2e9e74: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2e9e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2e9e78: 0xae230090  sw          $v1, 0x90($s1)
    ctx->pc = 0x2e9e78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 3));
    // 0x2e9e7c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x2e9e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x2e9e80: 0xae220094  sw          $v0, 0x94($s1)
    ctx->pc = 0x2e9e80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
    // 0x2e9e84: 0x3c04452f  lui         $a0, 0x452F
    ctx->pc = 0x2e9e84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17711 << 16));
    // 0x2e9e88: 0xae230098  sw          $v1, 0x98($s1)
    ctx->pc = 0x2e9e88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 3));
    // 0x2e9e8c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2e9e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e9e90: 0xae25009c  sw          $a1, 0x9C($s1)
    ctx->pc = 0x2e9e90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 5));
    // 0x2e9e94: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x2e9e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x2e9e98: 0xae2400a0  sw          $a0, 0xA0($s1)
    ctx->pc = 0x2e9e98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 4));
    // 0x2e9e9c: 0xae2300a4  sw          $v1, 0xA4($s1)
    ctx->pc = 0x2e9e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 3));
    // 0x2e9ea0: 0xae2400a8  sw          $a0, 0xA8($s1)
    ctx->pc = 0x2e9ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 4));
    // 0x2e9ea4: 0xae2500ac  sw          $a1, 0xAC($s1)
    ctx->pc = 0x2e9ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 5));
    // 0x2e9ea8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2E9EA8u;
    {
        const bool branch_taken_0x2e9ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9EA8u;
            // 0x2e9eac: 0xae2200b8  sw          $v0, 0xB8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9ea8) {
            ctx->pc = 0x2E9F3Cu;
            goto label_2e9f3c;
        }
    }
    ctx->pc = 0x2E9EB0u;
label_2e9eb0:
    // 0x2e9eb0: 0x3c0644a0  lui         $a2, 0x44A0
    ctx->pc = 0x2e9eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17568 << 16));
    // 0x2e9eb4: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2e9eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2e9eb8: 0xae260090  sw          $a2, 0x90($s1)
    ctx->pc = 0x2e9eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 6));
    // 0x2e9ebc: 0x3c024520  lui         $v0, 0x4520
    ctx->pc = 0x2e9ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17696 << 16));
    // 0x2e9ec0: 0xae230094  sw          $v1, 0x94($s1)
    ctx->pc = 0x2e9ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 3));
    // 0x2e9ec4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x2e9ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x2e9ec8: 0xae220098  sw          $v0, 0x98($s1)
    ctx->pc = 0x2e9ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
    // 0x2e9ecc: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x2e9eccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
    // 0x2e9ed0: 0xae25009c  sw          $a1, 0x9C($s1)
    ctx->pc = 0x2e9ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 5));
    // 0x2e9ed4: 0x3c034548  lui         $v1, 0x4548
    ctx->pc = 0x2e9ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17736 << 16));
    // 0x2e9ed8: 0xae2600a0  sw          $a2, 0xA0($s1)
    ctx->pc = 0x2e9ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 6));
    // 0x2e9edc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2e9edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e9ee0: 0xae2400a4  sw          $a0, 0xA4($s1)
    ctx->pc = 0x2e9ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 4));
    // 0x2e9ee4: 0xae2300a8  sw          $v1, 0xA8($s1)
    ctx->pc = 0x2e9ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 3));
    // 0x2e9ee8: 0xae2500ac  sw          $a1, 0xAC($s1)
    ctx->pc = 0x2e9ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 5));
    // 0x2e9eec: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2E9EECu;
    {
        const bool branch_taken_0x2e9eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9EECu;
            // 0x2e9ef0: 0xae2200b8  sw          $v0, 0xB8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9eec) {
            ctx->pc = 0x2E9F3Cu;
            goto label_2e9f3c;
        }
    }
    ctx->pc = 0x2E9EF4u;
label_2e9ef4:
    // 0x2e9ef4: 0xae200090  sw          $zero, 0x90($s1)
    ctx->pc = 0x2e9ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
    // 0x2e9ef8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2e9ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2e9efc: 0xae220094  sw          $v0, 0x94($s1)
    ctx->pc = 0x2e9efcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
    // 0x2e9f00: 0x3c04458c  lui         $a0, 0x458C
    ctx->pc = 0x2e9f00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17804 << 16));
    // 0x2e9f04: 0xae240098  sw          $a0, 0x98($s1)
    ctx->pc = 0x2e9f04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 4));
    // 0x2e9f08: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2e9f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2e9f0c: 0xae23009c  sw          $v1, 0x9C($s1)
    ctx->pc = 0x2e9f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 3));
    // 0x2e9f10: 0x3c024582  lui         $v0, 0x4582
    ctx->pc = 0x2e9f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17794 << 16));
    // 0x2e9f14: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x2e9f14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
    // 0x2e9f18: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2e9f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2e9f1c: 0xae2200a4  sw          $v0, 0xA4($s1)
    ctx->pc = 0x2e9f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
    // 0x2e9f20: 0xae2400a8  sw          $a0, 0xA8($s1)
    ctx->pc = 0x2e9f20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 4));
    // 0x2e9f24: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2e9f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e9f28: 0xae2300ac  sw          $v1, 0xAC($s1)
    ctx->pc = 0x2e9f28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 3));
    // 0x2e9f2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9F2Cu;
    {
        const bool branch_taken_0x2e9f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9F2Cu;
            // 0x2e9f30: 0xae2200b8  sw          $v0, 0xB8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9f2c) {
            ctx->pc = 0x2E9F3Cu;
            goto label_2e9f3c;
        }
    }
    ctx->pc = 0x2E9F34u;
    // 0x2e9f34: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2E9F34u;
    {
        const bool branch_taken_0x2e9f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9F34u;
            // 0x2e9f38: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9f34) {
            ctx->pc = 0x2EA008u;
            goto label_2ea008;
        }
    }
    ctx->pc = 0x2E9F3Cu;
label_2e9f3c:
    // 0x2e9f3c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x2e9f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x2e9f40: 0xc07659c  jal         func_1D9670
    ctx->pc = 0x2E9F40u;
    SET_GPR_U32(ctx, 31, 0x2E9F48u);
    ctx->pc = 0x2E9F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9F40u;
            // 0x2e9f44: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9670u;
    if (runtime->hasFunction(0x1D9670u)) {
        auto targetFn = runtime->lookupFunction(0x1D9670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9F48u; }
        if (ctx->pc != 0x2E9F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MinimapAllVisible__11CAutoMapGenFv_0x1d9670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9F48u; }
        if (ctx->pc != 0x2E9F48u) { return; }
    }
    ctx->pc = 0x2E9F48u;
label_2e9f48:
    // 0x2e9f48: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x2E9F48u;
    SET_GPR_U32(ctx, 31, 0x2E9F50u);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9F50u; }
        if (ctx->pc != 0x2E9F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9F50u; }
        if (ctx->pc != 0x2E9F50u) { return; }
    }
    ctx->pc = 0x2E9F50u;
label_2e9f50:
    // 0x2e9f50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9f54: 0x0  nop
    ctx->pc = 0x2e9f54u;
    // NOP
    // 0x2e9f58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e9f58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e9f5c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e9f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e9f60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9f60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9f64: 0x0  nop
    ctx->pc = 0x2e9f64u;
    // NOP
    // 0x2e9f68: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e9f68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9f6c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2e9f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2e9f70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9f70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9f74: 0x0  nop
    ctx->pc = 0x2e9f74u;
    // NOP
    // 0x2e9f78: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x2e9f78u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2e9f7c: 0x0  nop
    ctx->pc = 0x2e9f7cu;
    // NOP
    // 0x2e9f80: 0x0  nop
    ctx->pc = 0x2e9f80u;
    // NOP
    // 0x2e9f84: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2E9F84u;
    SET_GPR_U32(ctx, 31, 0x2E9F8Cu);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9F8Cu; }
        if (ctx->pc != 0x2E9F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9F8Cu; }
        if (ctx->pc != 0x2E9F8Cu) { return; }
    }
    ctx->pc = 0x2E9F8Cu;
label_2e9f8c:
    // 0x2e9f8c: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x2E9F8Cu;
    SET_GPR_U32(ctx, 31, 0x2E9F94u);
    ctx->pc = 0x2E9F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9F8Cu;
            // 0x2e9f90: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9F94u; }
        if (ctx->pc != 0x2E9F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9F94u; }
        if (ctx->pc != 0x2E9F94u) { return; }
    }
    ctx->pc = 0x2E9F94u;
label_2e9f94:
    // 0x2e9f94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9f98: 0x0  nop
    ctx->pc = 0x2e9f98u;
    // NOP
    // 0x2e9f9c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e9f9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e9fa0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e9fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e9fa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9fa8: 0x0  nop
    ctx->pc = 0x2e9fa8u;
    // NOP
    // 0x2e9fac: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2e9facu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e9fb0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2e9fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2e9fb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9fb8: 0x0  nop
    ctx->pc = 0x2e9fb8u;
    // NOP
    // 0x2e9fbc: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x2e9fbcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2e9fc0: 0x0  nop
    ctx->pc = 0x2e9fc0u;
    // NOP
    // 0x2e9fc4: 0x0  nop
    ctx->pc = 0x2e9fc4u;
    // NOP
    // 0x2e9fc8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2E9FC8u;
    SET_GPR_U32(ctx, 31, 0x2E9FD0u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9FD0u; }
        if (ctx->pc != 0x2E9FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9FD0u; }
        if (ctx->pc != 0x2E9FD0u) { return; }
    }
    ctx->pc = 0x2E9FD0u;
label_2e9fd0:
    // 0x2e9fd0: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x2e9fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
    // 0x2e9fd4: 0x8f858dcc  lw          $a1, -0x7234($gp)
    ctx->pc = 0x2e9fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
    // 0x2e9fd8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9FD8u;
    {
        const bool branch_taken_0x2e9fd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9FD8u;
            // 0x2e9fdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9fd8) {
            ctx->pc = 0x2E9FF0u;
            goto label_2e9ff0;
        }
    }
    ctx->pc = 0x2E9FE0u;
    // 0x2e9fe0: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x2e9fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x2e9fe4: 0xc049c18  jal         func_127060
    ctx->pc = 0x2E9FE4u;
    SET_GPR_U32(ctx, 31, 0x2E9FECu);
    ctx->pc = 0x2E9FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9FE4u;
            // 0x2e9fe8: 0x24060090  addiu       $a2, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9FECu; }
        if (ctx->pc != 0x2E9FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9FECu; }
        if (ctx->pc != 0x2E9FECu) { return; }
    }
    ctx->pc = 0x2E9FECu;
label_2e9fec:
    // 0x2e9fec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e9fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e9ff0:
    // 0x2e9ff0: 0xc0ba8d0  jal         func_2EA340
    ctx->pc = 0x2E9FF0u;
    SET_GPR_U32(ctx, 31, 0x2E9FF8u);
    ctx->pc = 0x2E9FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9FF0u;
            // 0x2e9ff4: 0xae300024  sw          $s0, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EA340u;
    if (runtime->hasFunction(0x2EA340u)) {
        auto targetFn = runtime->lookupFunction(0x2EA340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9FF8u; }
        if (ctx->pc != 0x2E9FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitStatusSprite__7CSphidaFv_0x2ea340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9FF8u; }
        if (ctx->pc != 0x2E9FF8u) { return; }
    }
    ctx->pc = 0x2E9FF8u;
label_2e9ff8:
    // 0x2e9ff8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e9ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9ffc: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x2e9ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
    // 0x2ea000: 0xae23020c  sw          $v1, 0x20C($s1)
    ctx->pc = 0x2ea000u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 524), GPR_U32(ctx, 3));
label_2ea004:
    // 0x2ea004: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ea004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ea008:
    // 0x2ea008: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ea008u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ea00c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ea00cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ea010: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA010u;
            // 0x2ea014: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EA018u;
}
