#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DATA__FP12RS_STACKDATAi
// Address: 0x25fac0 - 0x25fd6c
void ps2__DATA__FP12RS_STACKDATAi_0x25fac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DATA__FP12RS_STACKDATAi_0x25fac0");
#endif

    switch (ctx->pc) {
        case 0x25fb20u: goto label_25fb20;
        case 0x25fb2cu: goto label_25fb2c;
        case 0x25fb68u: goto label_25fb68;
        case 0x25fbf0u: goto label_25fbf0;
        case 0x25fbfcu: goto label_25fbfc;
        case 0x25fc2cu: goto label_25fc2c;
        case 0x25fc74u: goto label_25fc74;
        case 0x25fc8cu: goto label_25fc8c;
        case 0x25fca4u: goto label_25fca4;
        case 0x25fcc8u: goto label_25fcc8;
        case 0x25fcd4u: goto label_25fcd4;
        case 0x25fcf8u: goto label_25fcf8;
        case 0x25fd04u: goto label_25fd04;
        case 0x25fd14u: goto label_25fd14;
        default: break;
    }

    ctx->pc = 0x25fac0u;

    // 0x25fac0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x25fac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x25fac4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x25fac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x25fac8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x25fac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x25facc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x25faccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x25fad0: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x25fad0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fad4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x25fad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x25fad8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x25fad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x25fadc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x25fadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x25fae0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25fae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25fae4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25fae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25fae8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25fae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25faec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25faecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25faf0: 0x8f919808  lw          $s1, -0x67F8($gp)
    ctx->pc = 0x25faf0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940680)));
    // 0x25faf4: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25FAF4u;
    {
        const bool branch_taken_0x25faf4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FAF4u;
            // 0x25faf8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25faf4) {
            ctx->pc = 0x25FB04u;
            goto label_25fb04;
        }
    }
    ctx->pc = 0x25FAFCu;
    // 0x25fafc: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x25FAFCu;
    {
        const bool branch_taken_0x25fafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FAFCu;
            // 0x25fb00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fafc) {
            ctx->pc = 0x25FD3Cu;
            goto label_25fd3c;
        }
    }
    ctx->pc = 0x25FB04u;
label_25fb04:
    // 0x25fb04: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x25fb04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x25fb08: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25FB08u;
    {
        const bool branch_taken_0x25fb08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FB08u;
            // 0x25fb0c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fb08) {
            ctx->pc = 0x25FB18u;
            goto label_25fb18;
        }
    }
    ctx->pc = 0x25FB10u;
    // 0x25fb10: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x25FB10u;
    {
        const bool branch_taken_0x25fb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FB10u;
            // 0x25fb14: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fb10) {
            ctx->pc = 0x25FBA8u;
            goto label_25fba8;
        }
    }
    ctx->pc = 0x25FB18u;
label_25fb18:
    // 0x25fb18: 0xc04e748  jal         func_139D20
    ctx->pc = 0x25FB18u;
    SET_GPR_U32(ctx, 31, 0x25FB20u);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FB20u; }
        if (ctx->pc != 0x25FB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FB20u; }
        if (ctx->pc != 0x25FB20u) { return; }
    }
    ctx->pc = 0x25FB20u;
label_25fb20:
    // 0x25fb20: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x25fb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x25fb24: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x25FB24u;
    SET_GPR_U32(ctx, 31, 0x25FB2Cu);
    ctx->pc = 0x25FB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FB24u;
            // 0x25fb28: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FB2Cu; }
        if (ctx->pc != 0x25FB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FB2Cu; }
        if (ctx->pc != 0x25FB2Cu) { return; }
    }
    ctx->pc = 0x25FB2Cu;
label_25fb2c:
    // 0x25fb2c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25FB2Cu;
    {
        const bool branch_taken_0x25fb2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FB2Cu;
            // 0x25fb30: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fb2c) {
            ctx->pc = 0x25FB3Cu;
            goto label_25fb3c;
        }
    }
    ctx->pc = 0x25FB34u;
    // 0x25fb34: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x25FB34u;
    {
        const bool branch_taken_0x25fb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25fb34) {
            ctx->pc = 0x25FBA8u;
            goto label_25fba8;
        }
    }
    ctx->pc = 0x25FB3Cu;
label_25fb3c:
    // 0x25fb3c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x25fb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25fb40: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25fb40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25fb44: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x25fb44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x25fb48: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x25fb48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x25fb4c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x25fb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x25fb50: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25FB50u;
    {
        const bool branch_taken_0x25fb50 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x25fb50) {
            ctx->pc = 0x25FB60u;
            goto label_25fb60;
        }
    }
    ctx->pc = 0x25FB58u;
    // 0x25fb58: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25FB58u;
    {
        const bool branch_taken_0x25fb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FB58u;
            // 0x25fb5c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fb58) {
            ctx->pc = 0x25FB8Cu;
            goto label_25fb8c;
        }
    }
    ctx->pc = 0x25FB60u;
label_25fb60:
    // 0x25fb60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25FB60u;
    {
        const bool branch_taken_0x25fb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FB60u;
            // 0x25fb64: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fb60) {
            ctx->pc = 0x25FB6Cu;
            goto label_25fb6c;
        }
    }
    ctx->pc = 0x25FB68u;
label_25fb68:
    // 0x25fb68: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x25fb68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25fb6c:
    // 0x25fb6c: 0x0  nop
    ctx->pc = 0x25fb6cu;
    // NOP
    // 0x25fb70: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x25fb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x25fb74: 0x0  nop
    ctx->pc = 0x25fb74u;
    // NOP
    // 0x25fb78: 0x0  nop
    ctx->pc = 0x25fb78u;
    // NOP
    // 0x25fb7c: 0x0  nop
    ctx->pc = 0x25fb7cu;
    // NOP
    // 0x25fb80: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x25FB80u;
    {
        const bool branch_taken_0x25fb80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x25fb80) {
            ctx->pc = 0x25FB68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25fb68;
        }
    }
    ctx->pc = 0x25FB88u;
    // 0x25fb88: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x25fb88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_25fb8c:
    // 0x25fb8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25fb8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fb90: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x25fb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25fb94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25fb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25fb98: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x25fb98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x25fb9c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x25fb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x25fba0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25fba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25fba4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x25fba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_25fba8:
    // 0x25fba8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25FBA8u;
    {
        const bool branch_taken_0x25fba8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FBA8u;
            // 0x25fbac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fba8) {
            ctx->pc = 0x25FBB8u;
            goto label_25fbb8;
        }
    }
    ctx->pc = 0x25FBB0u;
    // 0x25fbb0: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x25FBB0u;
    {
        const bool branch_taken_0x25fbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FBB0u;
            // 0x25fbb4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fbb0) {
            ctx->pc = 0x25FD40u;
            goto label_25fd40;
        }
    }
    ctx->pc = 0x25FBB8u;
label_25fbb8:
    // 0x25fbb8: 0x8f839808  lw          $v1, -0x67F8($gp)
    ctx->pc = 0x25fbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940680)));
    // 0x25fbbc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x25fbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x25fbc0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25FBC0u;
    {
        const bool branch_taken_0x25fbc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FBC0u;
            // 0x25fbc4: 0x1e88c0  sll         $s1, $fp, 3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fbc0) {
            ctx->pc = 0x25FBD0u;
            goto label_25fbd0;
        }
    }
    ctx->pc = 0x25FBC8u;
    // 0x25fbc8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x25FBC8u;
    {
        const bool branch_taken_0x25fbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FBCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FBC8u;
            // 0x25fbcc: 0xafa000a0  sw          $zero, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fbc8) {
            ctx->pc = 0x25FC00u;
            goto label_25fc00;
        }
    }
    ctx->pc = 0x25FBD0u;
label_25fbd0:
    // 0x25fbd0: 0x3222000f  andi        $v0, $s1, 0xF
    ctx->pc = 0x25fbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x25fbd4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25FBD4u;
    {
        const bool branch_taken_0x25fbd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FBD4u;
            // 0x25fbd8: 0x111102  srl         $v0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fbd4) {
            ctx->pc = 0x25FBE4u;
            goto label_25fbe4;
        }
    }
    ctx->pc = 0x25FBDCu;
    // 0x25fbdc: 0x111102  srl         $v0, $s1, 4
    ctx->pc = 0x25fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
    // 0x25fbe0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25fbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25fbe4:
    // 0x25fbe4: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x25fbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x25fbe8: 0xc04e748  jal         func_139D20
    ctx->pc = 0x25FBE8u;
    SET_GPR_U32(ctx, 31, 0x25FBF0u);
    ctx->pc = 0x25FBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FBE8u;
            // 0x25fbec: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FBF0u; }
        if (ctx->pc != 0x25FBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FBF0u; }
        if (ctx->pc != 0x25FBF0u) { return; }
    }
    ctx->pc = 0x25FBF0u;
label_25fbf0:
    // 0x25fbf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25fbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fbf4: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x25FBF4u;
    SET_GPR_U32(ctx, 31, 0x25FBFCu);
    ctx->pc = 0x25FBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FBF4u;
            // 0x25fbf8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FBFCu; }
        if (ctx->pc != 0x25FBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FBFCu; }
        if (ctx->pc != 0x25FBFCu) { return; }
    }
    ctx->pc = 0x25FBFCu;
label_25fbfc:
    // 0x25fbfc: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x25fbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_25fc00:
    // 0x25fc00: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x25fc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25fc04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25FC04u;
    {
        const bool branch_taken_0x25fc04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25fc04) {
            ctx->pc = 0x25FC14u;
            goto label_25fc14;
        }
    }
    ctx->pc = 0x25FC0Cu;
    // 0x25fc0c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x25FC0Cu;
    {
        const bool branch_taken_0x25fc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FC10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FC0Cu;
            // 0x25fc10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fc0c) {
            ctx->pc = 0x25FD3Cu;
            goto label_25fd3c;
        }
    }
    ctx->pc = 0x25FC14u;
label_25fc14:
    // 0x25fc14: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x25fc14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x25fc18: 0x1e082a  slt         $at, $zero, $fp
    ctx->pc = 0x25fc18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x25fc1c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x25fc1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc20: 0x10200045  beqz        $at, . + 4 + (0x45 << 2)
    ctx->pc = 0x25FC20u;
    {
        const bool branch_taken_0x25fc20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FC20u;
            // 0x25fc24: 0xae1e0008  sw          $fp, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fc20) {
            ctx->pc = 0x25FD38u;
            goto label_25fd38;
        }
    }
    ctx->pc = 0x25FC28u;
    // 0x25fc28: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x25fc28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25fc2c:
    // 0x25fc2c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x25fc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25fc30: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x25fc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x25fc34: 0x529821  addu        $s3, $v0, $s2
    ctx->pc = 0x25fc34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x25fc38: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x25fc38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x25fc3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25fc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25fc40: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x25fc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x25fc44: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x25FC44u;
    {
        const bool branch_taken_0x25fc44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25FC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FC44u;
            // 0x25fc48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fc44) {
            ctx->pc = 0x25FC94u;
            goto label_25fc94;
        }
    }
    ctx->pc = 0x25FC4Cu;
    // 0x25fc4c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x25FC4Cu;
    {
        const bool branch_taken_0x25fc4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25fc4c) {
            ctx->pc = 0x25FC7Cu;
            goto label_25fc7c;
        }
    }
    ctx->pc = 0x25FC54u;
    // 0x25fc54: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25FC54u;
    {
        const bool branch_taken_0x25fc54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25fc54) {
            ctx->pc = 0x25FC64u;
            goto label_25fc64;
        }
    }
    ctx->pc = 0x25FC5Cu;
    // 0x25fc5c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x25FC5Cu;
    {
        const bool branch_taken_0x25fc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25fc5c) {
            ctx->pc = 0x25FD20u;
            goto label_25fd20;
        }
    }
    ctx->pc = 0x25FC64u;
label_25fc64:
    // 0x25fc64: 0x0  nop
    ctx->pc = 0x25fc64u;
    // NOP
    // 0x25fc68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25fc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc6c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x25FC6Cu;
    SET_GPR_U32(ctx, 31, 0x25FC74u);
    ctx->pc = 0x25FC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FC6Cu;
            // 0x25fc70: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FC74u; }
        if (ctx->pc != 0x25FC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FC74u; }
        if (ctx->pc != 0x25FC74u) { return; }
    }
    ctx->pc = 0x25FC74u;
label_25fc74:
    // 0x25fc74: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x25FC74u;
    {
        const bool branch_taken_0x25fc74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FC74u;
            // 0x25fc78: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fc74) {
            ctx->pc = 0x25FD24u;
            goto label_25fd24;
        }
    }
    ctx->pc = 0x25FC7Cu;
label_25fc7c:
    // 0x25fc7c: 0x0  nop
    ctx->pc = 0x25fc7cu;
    // NOP
    // 0x25fc80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25fc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc84: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x25FC84u;
    SET_GPR_U32(ctx, 31, 0x25FC8Cu);
    ctx->pc = 0x25FC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FC84u;
            // 0x25fc88: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FC8Cu; }
        if (ctx->pc != 0x25FC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FC8Cu; }
        if (ctx->pc != 0x25FC8Cu) { return; }
    }
    ctx->pc = 0x25FC8Cu;
label_25fc8c:
    // 0x25fc8c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x25FC8Cu;
    {
        const bool branch_taken_0x25fc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FC8Cu;
            // 0x25fc90: 0xe6600004  swc1        $f0, 0x4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fc8c) {
            ctx->pc = 0x25FD24u;
            goto label_25fd24;
        }
    }
    ctx->pc = 0x25FC94u;
label_25fc94:
    // 0x25fc94: 0x0  nop
    ctx->pc = 0x25fc94u;
    // NOP
    // 0x25fc98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25fc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc9c: 0xc097e48  jal         func_25F920
    ctx->pc = 0x25FC9Cu;
    SET_GPR_U32(ctx, 31, 0x25FCA4u);
    ctx->pc = 0x25FCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FC9Cu;
            // 0x25fca0: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FCA4u; }
        if (ctx->pc != 0x25FCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FCA4u; }
        if (ctx->pc != 0x25FCA4u) { return; }
    }
    ctx->pc = 0x25FCA4u;
label_25fca4:
    // 0x25fca4: 0x8f959808  lw          $s5, -0x67F8($gp)
    ctx->pc = 0x25fca4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940680)));
    // 0x25fca8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25fca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fcac: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x25fcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x25fcb0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25FCB0u;
    {
        const bool branch_taken_0x25fcb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FCB0u;
            // 0x25fcb4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fcb0) {
            ctx->pc = 0x25FCC0u;
            goto label_25fcc0;
        }
    }
    ctx->pc = 0x25FCB8u;
    // 0x25fcb8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x25FCB8u;
    {
        const bool branch_taken_0x25fcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25fcb8) {
            ctx->pc = 0x25FD14u;
            goto label_25fd14;
        }
    }
    ctx->pc = 0x25FCC0u;
label_25fcc0:
    // 0x25fcc0: 0xc04a422  jal         func_129088
    ctx->pc = 0x25FCC0u;
    SET_GPR_U32(ctx, 31, 0x25FCC8u);
    ctx->pc = 0x25FCC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FCC0u;
            // 0x25fcc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FCC8u; }
        if (ctx->pc != 0x25FCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FCC8u; }
        if (ctx->pc != 0x25FCC8u) { return; }
    }
    ctx->pc = 0x25FCC8u;
label_25fcc8:
    // 0x25fcc8: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x25fcc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25fccc: 0xc04a422  jal         func_129088
    ctx->pc = 0x25FCCCu;
    SET_GPR_U32(ctx, 31, 0x25FCD4u);
    ctx->pc = 0x25FCD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FCCCu;
            // 0x25fcd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FCD4u; }
        if (ctx->pc != 0x25FCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FCD4u; }
        if (ctx->pc != 0x25FCD4u) { return; }
    }
    ctx->pc = 0x25FCD4u;
label_25fcd4:
    // 0x25fcd4: 0x24570001  addiu       $s7, $v0, 0x1
    ctx->pc = 0x25fcd4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25fcd8: 0x3222000f  andi        $v0, $s1, 0xF
    ctx->pc = 0x25fcd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x25fcdc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25FCDCu;
    {
        const bool branch_taken_0x25fcdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FCE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FCDCu;
            // 0x25fce0: 0x111102  srl         $v0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fcdc) {
            ctx->pc = 0x25FCECu;
            goto label_25fcec;
        }
    }
    ctx->pc = 0x25FCE4u;
    // 0x25fce4: 0x111102  srl         $v0, $s1, 4
    ctx->pc = 0x25fce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
    // 0x25fce8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25fce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25fcec:
    // 0x25fcec: 0x8ea4000c  lw          $a0, 0xC($s5)
    ctx->pc = 0x25fcecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x25fcf0: 0xc04e748  jal         func_139D20
    ctx->pc = 0x25FCF0u;
    SET_GPR_U32(ctx, 31, 0x25FCF8u);
    ctx->pc = 0x25FCF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FCF0u;
            // 0x25fcf4: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FCF8u; }
        if (ctx->pc != 0x25FCF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FCF8u; }
        if (ctx->pc != 0x25FCF8u) { return; }
    }
    ctx->pc = 0x25FCF8u;
label_25fcf8:
    // 0x25fcf8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x25fcf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fcfc: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x25FCFCu;
    SET_GPR_U32(ctx, 31, 0x25FD04u);
    ctx->pc = 0x25FD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FCFCu;
            // 0x25fd00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FD04u; }
        if (ctx->pc != 0x25FD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FD04u; }
        if (ctx->pc != 0x25FD04u) { return; }
    }
    ctx->pc = 0x25FD04u;
label_25fd04:
    // 0x25fd04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25fd04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fd08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25fd08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fd0c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x25FD0Cu;
    SET_GPR_U32(ctx, 31, 0x25FD14u);
    ctx->pc = 0x25FD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FD0Cu;
            // 0x25fd10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FD14u; }
        if (ctx->pc != 0x25FD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FD14u; }
        if (ctx->pc != 0x25FD14u) { return; }
    }
    ctx->pc = 0x25FD14u;
label_25fd14:
    // 0x25fd14: 0x0  nop
    ctx->pc = 0x25fd14u;
    // NOP
    // 0x25fd18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25FD18u;
    {
        const bool branch_taken_0x25fd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FD1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FD18u;
            // 0x25fd1c: 0xae710004  sw          $s1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fd18) {
            ctx->pc = 0x25FD24u;
            goto label_25fd24;
        }
    }
    ctx->pc = 0x25FD20u;
label_25fd20:
    // 0x25fd20: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x25fd20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_25fd24:
    // 0x25fd24: 0x0  nop
    ctx->pc = 0x25fd24u;
    // NOP
    // 0x25fd28: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x25fd28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x25fd2c: 0x2de102a  slt         $v0, $s6, $fp
    ctx->pc = 0x25fd2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x25fd30: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x25FD30u;
    {
        const bool branch_taken_0x25fd30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FD30u;
            // 0x25fd34: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fd30) {
            ctx->pc = 0x25FC2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25fc2c;
        }
    }
    ctx->pc = 0x25FD38u;
label_25fd38:
    // 0x25fd38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25fd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25fd3c:
    // 0x25fd3c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x25fd3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_25fd40:
    // 0x25fd40: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x25fd40u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25fd44: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x25fd44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25fd48: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x25fd48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25fd4c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x25fd4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25fd50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25fd50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25fd54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25fd54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25fd58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25fd58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25fd5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25fd5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25fd60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25fd60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25fd64: 0x3e00008  jr          $ra
    ctx->pc = 0x25FD64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FD64u;
            // 0x25fd68: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25FD6Cu;
}
