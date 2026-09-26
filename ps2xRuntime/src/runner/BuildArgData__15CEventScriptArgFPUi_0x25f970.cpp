#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: BuildArgData__15CEventScriptArgFPUi
// Address: 0x25f970 - 0x25fabc
void BuildArgData__15CEventScriptArgFPUi_0x25f970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BuildArgData__15CEventScriptArgFPUi_0x25f970");
#endif

    switch (ctx->pc) {
        case 0x25f9a4u: goto label_25f9a4;
        case 0x25f9d0u: goto label_25f9d0;
        case 0x25f9ecu: goto label_25f9ec;
        case 0x25fa2cu: goto label_25fa2c;
        case 0x25fa64u: goto label_25fa64;
        case 0x25fa80u: goto label_25fa80;
        case 0x25fa90u: goto label_25fa90;
        case 0x25fa9cu: goto label_25fa9c;
        default: break;
    }

    ctx->pc = 0x25f970u;

    // 0x25f970: 0x27bdfcc0  addiu       $sp, $sp, -0x340
    ctx->pc = 0x25f970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966464));
    // 0x25f974: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x25f974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x25f978: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25f978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25f97c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25f97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25f980: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x25f980u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f984: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25f984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25f988: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25f988u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f98c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25f98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25f990: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x25f990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f994: 0xafa00330  sw          $zero, 0x330($sp)
    ctx->pc = 0x25f994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 816), GPR_U32(ctx, 0));
    // 0x25f998: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x25f998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f99c: 0xafa00334  sw          $zero, 0x334($sp)
    ctx->pc = 0x25f99cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 820), GPR_U32(ctx, 0));
    // 0x25f9a0: 0xafa00338  sw          $zero, 0x338($sp)
    ctx->pc = 0x25f9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 824), GPR_U32(ctx, 0));
label_25f9a4:
    // 0x25f9a4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x25f9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x25f9a8: 0x24841bd0  addiu       $a0, $a0, 0x1BD0
    ctx->pc = 0x25f9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7120));
    // 0x25f9ac: 0x913821  addu        $a3, $a0, $s1
    ctx->pc = 0x25f9acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x25f9b0: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x25f9b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x25f9b4: 0x11000027  beqz        $t0, . + 4 + (0x27 << 2)
    ctx->pc = 0x25F9B4u;
    {
        const bool branch_taken_0x25f9b4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F9B4u;
            // 0x25f9b8: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f9b4) {
            ctx->pc = 0x25FA54u;
            goto label_25fa54;
        }
    }
    ctx->pc = 0x25F9BCu;
    // 0x25f9bc: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x25F9BCu;
    {
        const bool branch_taken_0x25f9bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F9C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F9BCu;
            // 0x25f9c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f9bc) {
            ctx->pc = 0x25FA08u;
            goto label_25fa08;
        }
    }
    ctx->pc = 0x25F9C4u;
    // 0x25f9c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25f9c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f9c8: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x25f9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x25f9cc: 0x0  nop
    ctx->pc = 0x25f9ccu;
    // NOP
label_25f9d0:
    // 0x25f9d0: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x25f9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x25f9d4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x25f9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25f9d8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25F9D8u;
    {
        const bool branch_taken_0x25f9d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25f9d8) {
            ctx->pc = 0x25F9F4u;
            goto label_25f9f4;
        }
    }
    ctx->pc = 0x25F9E0u;
    // 0x25f9e0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x25f9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x25f9e4: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x25F9E4u;
    SET_GPR_U32(ctx, 31, 0x25F9ECu);
    ctx->pc = 0x25F9E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25F9E4u;
            // 0x25f9e8: 0x2484c450  addiu       $a0, $a0, -0x3BB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F9ECu; }
        if (ctx->pc != 0x25F9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F9ECu; }
        if (ctx->pc != 0x25F9ECu) { return; }
    }
    ctx->pc = 0x25F9ECu;
label_25f9ec:
    // 0x25f9ec: 0x1000ffff  b           . + 4 + (-0x1 << 2)
    ctx->pc = 0x25F9ECu;
    {
        const bool branch_taken_0x25f9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f9ec) {
            ctx->pc = 0x25F9ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25f9ec;
        }
    }
    ctx->pc = 0x25F9F4u;
label_25f9f4:
    // 0x25f9f4: 0x0  nop
    ctx->pc = 0x25f9f4u;
    // NOP
    // 0x25f9f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x25f9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x25f9fc: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x25f9fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x25fa00: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x25FA00u;
    {
        const bool branch_taken_0x25fa00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FA00u;
            // 0x25fa04: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fa00) {
            ctx->pc = 0x25F9D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25f9d0;
        }
    }
    ctx->pc = 0x25FA08u;
label_25fa08:
    // 0x25fa08: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x25fa08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x25fa0c: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25FA0Cu;
    {
        const bool branch_taken_0x25fa0c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x25FA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FA0Cu;
            // 0x25fa10: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fa0c) {
            ctx->pc = 0x25FA1Cu;
            goto label_25fa1c;
        }
    }
    ctx->pc = 0x25FA14u;
    // 0x25fa14: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25FA14u;
    {
        const bool branch_taken_0x25fa14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25fa14) {
            ctx->pc = 0x25FA34u;
            goto label_25fa34;
        }
    }
    ctx->pc = 0x25FA1Cu;
label_25fa1c:
    // 0x25fa1c: 0x0  nop
    ctx->pc = 0x25fa1cu;
    // NOP
    // 0x25fa20: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x25fa20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x25fa24: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x25FA24u;
    SET_GPR_U32(ctx, 31, 0x25FA2Cu);
    ctx->pc = 0x25FA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FA24u;
            // 0x25fa28: 0x2484c480  addiu       $a0, $a0, -0x3B80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FA2Cu; }
        if (ctx->pc != 0x25FA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FA2Cu; }
        if (ctx->pc != 0x25FA2Cu) { return; }
    }
    ctx->pc = 0x25FA2Cu;
label_25fa2c:
    // 0x25fa2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25FA2Cu;
    {
        const bool branch_taken_0x25fa2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25fa2c) {
            ctx->pc = 0x25FA44u;
            goto label_25fa44;
        }
    }
    ctx->pc = 0x25FA34u;
label_25fa34:
    // 0x25fa34: 0x0  nop
    ctx->pc = 0x25fa34u;
    // NOP
    // 0x25fa38: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x25fa38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25fa3c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x25fa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x25fa40: 0xac480330  sw          $t0, 0x330($v0)
    ctx->pc = 0x25fa40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 816), GPR_U32(ctx, 8));
label_25fa44:
    // 0x25fa44: 0x0  nop
    ctx->pc = 0x25fa44u;
    // NOP
    // 0x25fa48: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x25fa48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x25fa4c: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
    ctx->pc = 0x25FA4Cu;
    {
        const bool branch_taken_0x25fa4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FA4Cu;
            // 0x25fa50: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fa4c) {
            ctx->pc = 0x25F9A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25f9a4;
        }
    }
    ctx->pc = 0x25FA54u;
label_25fa54:
    // 0x25fa54: 0x0  nop
    ctx->pc = 0x25fa54u;
    // NOP
    // 0x25fa58: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x25fa58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x25fa5c: 0xc061b34  jal         func_186CD0
    ctx->pc = 0x25FA5Cu;
    SET_GPR_U32(ctx, 31, 0x25FA64u);
    ctx->pc = 0x25FA60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FA5Cu;
            // 0x25fa60: 0xaf939808  sw          $s3, -0x67F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940680), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186CD0u;
    if (runtime->hasFunction(0x186CD0u)) {
        auto targetFn = runtime->lookupFunction(0x186CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FA64u; }
        if (ctx->pc != 0x25FA64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10CRunScriptFv_0x186cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FA64u; }
        if (ctx->pc != 0x25FA64u) { return; }
    }
    ctx->pc = 0x25FA64u;
label_25fa64:
    // 0x25fa64: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x25fa64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x25fa68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25fa68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fa6c: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x25fa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x25fa70: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x25fa70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25fa74: 0x27a80150  addiu       $t0, $sp, 0x150
    ctx->pc = 0x25fa74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x25fa78: 0xc061c3c  jal         func_1870F0
    ctx->pc = 0x25FA78u;
    SET_GPR_U32(ctx, 31, 0x25FA80u);
    ctx->pc = 0x25FA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FA78u;
            // 0x25fa7c: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1870F0u;
    if (runtime->hasFunction(0x1870F0u)) {
        auto targetFn = runtime->lookupFunction(0x1870F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FA80u; }
        if (ctx->pc != 0x25FA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        load__10CRunScriptFP14RS_PROG_HEADERP12RS_STACKDATAiP11RS_CALLDATAi_0x1870f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FA80u; }
        if (ctx->pc != 0x25FA80u) { return; }
    }
    ctx->pc = 0x25FA80u;
label_25fa80:
    // 0x25fa80: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x25fa80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x25fa84: 0x27a50330  addiu       $a1, $sp, 0x330
    ctx->pc = 0x25fa84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
    // 0x25fa88: 0xc061c74  jal         func_1871D0
    ctx->pc = 0x25FA88u;
    SET_GPR_U32(ctx, 31, 0x25FA90u);
    ctx->pc = 0x25FA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FA88u;
            // 0x25fa8c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1871D0u;
    if (runtime->hasFunction(0x1871D0u)) {
        auto targetFn = runtime->lookupFunction(0x1871D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FA90u; }
        if (ctx->pc != 0x25FA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ext_func__10CRunScriptFPPFP12RS_STACKDATAi_ii_0x1871d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FA90u; }
        if (ctx->pc != 0x25FA90u) { return; }
    }
    ctx->pc = 0x25FA90u;
label_25fa90:
    // 0x25fa90: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x25fa90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x25fa94: 0xc061c84  jal         func_187210
    ctx->pc = 0x25FA94u;
    SET_GPR_U32(ctx, 31, 0x25FA9Cu);
    ctx->pc = 0x25FA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FA94u;
            // 0x25fa98: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187210u;
    if (runtime->hasFunction(0x187210u)) {
        auto targetFn = runtime->lookupFunction(0x187210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FA9Cu; }
        if (ctx->pc != 0x25FA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        run__10CRunScriptFi_0x187210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FA9Cu; }
        if (ctx->pc != 0x25FA9Cu) { return; }
    }
    ctx->pc = 0x25FA9Cu;
label_25fa9c:
    // 0x25fa9c: 0xaf809808  sw          $zero, -0x67F8($gp)
    ctx->pc = 0x25fa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940680), GPR_U32(ctx, 0));
    // 0x25faa0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x25faa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25faa4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25faa4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25faa8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25faa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25faac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25faacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25fab0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25fab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25fab4: 0x3e00008  jr          $ra
    ctx->pc = 0x25FAB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FAB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FAB4u;
            // 0x25fab8: 0x27bd0340  addiu       $sp, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25FABCu;
}
