#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchSeq__11sndBankInfoFPcPi
// Address: 0x18f9a0 - 0x18faf4
void SearchSeq__11sndBankInfoFPcPi_0x18f9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchSeq__11sndBankInfoFPcPi_0x18f9a0");
#endif

    switch (ctx->pc) {
        case 0x18f9ecu: goto label_18f9ec;
        case 0x18fa04u: goto label_18fa04;
        case 0x18fa18u: goto label_18fa18;
        case 0x18fa54u: goto label_18fa54;
        case 0x18fa68u: goto label_18fa68;
        case 0x18faa0u: goto label_18faa0;
        default: break;
    }

    ctx->pc = 0x18f9a0u;

    // 0x18f9a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18f9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18f9a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x18f9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x18f9a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18f9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18f9ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18f9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18f9b0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x18f9b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f9b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18f9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18f9b8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x18f9b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f9bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18f9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18f9c0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x18f9c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f9c4: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x18F9C4u;
    {
        const bool branch_taken_0x18f9c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F9C4u;
            // 0x18f9c8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f9c4) {
            ctx->pc = 0x18F9D8u;
            goto label_18f9d8;
        }
    }
    ctx->pc = 0x18F9CCu;
    // 0x18f9cc: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x18f9ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18f9d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F9D0u;
    {
        const bool branch_taken_0x18f9d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F9D0u;
            // 0x18f9d4: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f9d0) {
            ctx->pc = 0x18F9E0u;
            goto label_18f9e0;
        }
    }
    ctx->pc = 0x18F9D8u;
label_18f9d8:
    // 0x18f9d8: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x18F9D8u;
    {
        const bool branch_taken_0x18f9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F9D8u;
            // 0x18f9dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f9d8) {
            ctx->pc = 0x18FAD4u;
            goto label_18fad4;
        }
    }
    ctx->pc = 0x18F9E0u;
label_18f9e0:
    // 0x18f9e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18f9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f9e4: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x18F9E4u;
    SET_GPR_U32(ctx, 31, 0x18F9ECu);
    ctx->pc = 0x18F9E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18F9E4u;
            // 0x18f9e8: 0x24a54ac8  addiu       $a1, $a1, 0x4AC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F9ECu; }
        if (ctx->pc != 0x18F9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F9ECu; }
        if (ctx->pc != 0x18F9ECu) { return; }
    }
    ctx->pc = 0x18F9ECu;
label_18f9ec:
    // 0x18f9ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F9ECu;
    {
        const bool branch_taken_0x18f9ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F9ECu;
            // 0x18f9f0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f9ec) {
            ctx->pc = 0x18F9FCu;
            goto label_18f9fc;
        }
    }
    ctx->pc = 0x18F9F4u;
    // 0x18f9f4: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x18F9F4u;
    {
        const bool branch_taken_0x18f9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F9F4u;
            // 0x18f9f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f9f4) {
            ctx->pc = 0x18FAD4u;
            goto label_18fad4;
        }
    }
    ctx->pc = 0x18F9FCu;
label_18f9fc:
    // 0x18f9fc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18F9FCu;
    {
        const bool branch_taken_0x18f9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F9FCu;
            // 0x18fa00: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f9fc) {
            ctx->pc = 0x18FA34u;
            goto label_18fa34;
        }
    }
    ctx->pc = 0x18FA04u;
label_18fa04:
    // 0x18fa04: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x18fa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x18fa08: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x18fa08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18fa0c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x18fa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18fa10: 0xc04a2ac  jal         func_128AB0
    ctx->pc = 0x18FA10u;
    SET_GPR_U32(ctx, 31, 0x18FA18u);
    ctx->pc = 0x18FA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FA10u;
            // 0x18fa14: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128AB0u;
    if (runtime->hasFunction(0x128AB0u)) {
        auto targetFn = runtime->lookupFunction(0x128AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FA18u; }
        if (ctx->pc != 0x18FA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcasecmp_0x128ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FA18u; }
        if (ctx->pc != 0x18FA18u) { return; }
    }
    ctx->pc = 0x18FA18u;
label_18fa18:
    // 0x18fa18: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18FA18u;
    {
        const bool branch_taken_0x18fa18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fa18) {
            ctx->pc = 0x18FA2Cu;
            goto label_18fa2c;
        }
    }
    ctx->pc = 0x18FA20u;
    // 0x18fa20: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x18fa20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x18fa24: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x18FA24u;
    {
        const bool branch_taken_0x18fa24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FA24u;
            // 0x18fa28: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fa24) {
            ctx->pc = 0x18FAD4u;
            goto label_18fad4;
        }
    }
    ctx->pc = 0x18FA2Cu;
label_18fa2c:
    // 0x18fa2c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x18fa2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x18fa30: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18fa30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_18fa34:
    // 0x18fa34: 0x0  nop
    ctx->pc = 0x18fa34u;
    // NOP
    // 0x18fa38: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x18fa38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x18fa3c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x18fa3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18fa40: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x18FA40u;
    {
        const bool branch_taken_0x18fa40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fa40) {
            ctx->pc = 0x18FA04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18fa04;
        }
    }
    ctx->pc = 0x18FA48u;
    // 0x18fa48: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18fa48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fa4c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18FA4Cu;
    {
        const bool branch_taken_0x18fa4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FA4Cu;
            // 0x18fa50: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fa4c) {
            ctx->pc = 0x18FA84u;
            goto label_18fa84;
        }
    }
    ctx->pc = 0x18FA54u;
label_18fa54:
    // 0x18fa54: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x18fa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x18fa58: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x18fa58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18fa5c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x18fa5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18fa60: 0xc04a2ac  jal         func_128AB0
    ctx->pc = 0x18FA60u;
    SET_GPR_U32(ctx, 31, 0x18FA68u);
    ctx->pc = 0x18FA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FA60u;
            // 0x18fa64: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128AB0u;
    if (runtime->hasFunction(0x128AB0u)) {
        auto targetFn = runtime->lookupFunction(0x128AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FA68u; }
        if (ctx->pc != 0x18FA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcasecmp_0x128ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FA68u; }
        if (ctx->pc != 0x18FA68u) { return; }
    }
    ctx->pc = 0x18FA68u;
label_18fa68:
    // 0x18fa68: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18FA68u;
    {
        const bool branch_taken_0x18fa68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fa68) {
            ctx->pc = 0x18FA7Cu;
            goto label_18fa7c;
        }
    }
    ctx->pc = 0x18FA70u;
    // 0x18fa70: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x18fa70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x18fa74: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x18FA74u;
    {
        const bool branch_taken_0x18fa74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FA74u;
            // 0x18fa78: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fa74) {
            ctx->pc = 0x18FAD4u;
            goto label_18fad4;
        }
    }
    ctx->pc = 0x18FA7Cu;
label_18fa7c:
    // 0x18fa7c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x18fa7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18fa80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18fa80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_18fa84:
    // 0x18fa84: 0x0  nop
    ctx->pc = 0x18fa84u;
    // NOP
    // 0x18fa88: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x18fa88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x18fa8c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x18fa8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18fa90: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x18FA90u;
    {
        const bool branch_taken_0x18fa90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18FA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FA90u;
            // 0x18fa94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fa90) {
            ctx->pc = 0x18FA54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18fa54;
        }
    }
    ctx->pc = 0x18FA98u;
    // 0x18fa98: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18FA98u;
    {
        const bool branch_taken_0x18fa98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FA98u;
            // 0x18fa9c: 0x2403002e  addiu       $v1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fa98) {
            ctx->pc = 0x18FABCu;
            goto label_18fabc;
        }
    }
    ctx->pc = 0x18FAA0u;
label_18faa0:
    // 0x18faa0: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x18faa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x18faa4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x18faa4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x18faa8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18FAA8u;
    {
        const bool branch_taken_0x18faa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x18FAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FAA8u;
            // 0x18faac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18faa8) {
            ctx->pc = 0x18FAB8u;
            goto label_18fab8;
        }
    }
    ctx->pc = 0x18FAB0u;
    // 0x18fab0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x18FAB0u;
    {
        const bool branch_taken_0x18fab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FAB0u;
            // 0x18fab4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fab0) {
            ctx->pc = 0x18FAD8u;
            goto label_18fad8;
        }
    }
    ctx->pc = 0x18FAB8u;
label_18fab8:
    // 0x18fab8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x18fab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_18fabc:
    // 0x18fabc: 0x0  nop
    ctx->pc = 0x18fabcu;
    // NOP
    // 0x18fac0: 0x2641021  addu        $v0, $s3, $a0
    ctx->pc = 0x18fac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x18fac4: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x18fac4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18fac8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x18FAC8u;
    {
        const bool branch_taken_0x18fac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fac8) {
            ctx->pc = 0x18FAA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18faa0;
        }
    }
    ctx->pc = 0x18FAD0u;
    // 0x18fad0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18fad4:
    // 0x18fad4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x18fad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_18fad8:
    // 0x18fad8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18fad8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18fadc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18fadcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18fae0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18fae0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18fae4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18fae4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18fae8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18fae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18faec: 0x3e00008  jr          $ra
    ctx->pc = 0x18FAECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FAECu;
            // 0x18faf0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18FAF4u;
}
