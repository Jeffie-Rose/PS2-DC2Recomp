#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetShow__10CEohMotherFii
// Address: 0x25ea90 - 0x25eb5c
void SetShow__10CEohMotherFii_0x25ea90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetShow__10CEohMotherFii_0x25ea90");
#endif

    switch (ctx->pc) {
        case 0x25ea90u: goto label_25ea90;
        case 0x25ea94u: goto label_25ea94;
        case 0x25ea98u: goto label_25ea98;
        case 0x25ea9cu: goto label_25ea9c;
        case 0x25eaa0u: goto label_25eaa0;
        case 0x25eaa4u: goto label_25eaa4;
        case 0x25eaa8u: goto label_25eaa8;
        case 0x25eaacu: goto label_25eaac;
        case 0x25eab0u: goto label_25eab0;
        case 0x25eab4u: goto label_25eab4;
        case 0x25eab8u: goto label_25eab8;
        case 0x25eabcu: goto label_25eabc;
        case 0x25eac0u: goto label_25eac0;
        case 0x25eac4u: goto label_25eac4;
        case 0x25eac8u: goto label_25eac8;
        case 0x25eaccu: goto label_25eacc;
        case 0x25ead0u: goto label_25ead0;
        case 0x25ead4u: goto label_25ead4;
        case 0x25ead8u: goto label_25ead8;
        case 0x25eadcu: goto label_25eadc;
        case 0x25eae0u: goto label_25eae0;
        case 0x25eae4u: goto label_25eae4;
        case 0x25eae8u: goto label_25eae8;
        case 0x25eaecu: goto label_25eaec;
        case 0x25eaf0u: goto label_25eaf0;
        case 0x25eaf4u: goto label_25eaf4;
        case 0x25eaf8u: goto label_25eaf8;
        case 0x25eafcu: goto label_25eafc;
        case 0x25eb00u: goto label_25eb00;
        case 0x25eb04u: goto label_25eb04;
        case 0x25eb08u: goto label_25eb08;
        case 0x25eb0cu: goto label_25eb0c;
        case 0x25eb10u: goto label_25eb10;
        case 0x25eb14u: goto label_25eb14;
        case 0x25eb18u: goto label_25eb18;
        case 0x25eb1cu: goto label_25eb1c;
        case 0x25eb20u: goto label_25eb20;
        case 0x25eb24u: goto label_25eb24;
        case 0x25eb28u: goto label_25eb28;
        case 0x25eb2cu: goto label_25eb2c;
        case 0x25eb30u: goto label_25eb30;
        case 0x25eb34u: goto label_25eb34;
        case 0x25eb38u: goto label_25eb38;
        case 0x25eb3cu: goto label_25eb3c;
        case 0x25eb40u: goto label_25eb40;
        case 0x25eb44u: goto label_25eb44;
        case 0x25eb48u: goto label_25eb48;
        case 0x25eb4cu: goto label_25eb4c;
        case 0x25eb50u: goto label_25eb50;
        case 0x25eb54u: goto label_25eb54;
        case 0x25eb58u: goto label_25eb58;
        default: break;
    }

    ctx->pc = 0x25ea90u;

label_25ea90:
    // 0x25ea90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25ea90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_25ea94:
    // 0x25ea94: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_25ea98:
    if (ctx->pc == 0x25EA98u) {
        ctx->pc = 0x25EA98u;
            // 0x25ea98: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x25EA9Cu;
        goto label_25ea9c;
    }
    ctx->pc = 0x25EA94u;
    {
        const bool branch_taken_0x25ea94 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25EA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EA94u;
            // 0x25ea98: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ea94) {
            ctx->pc = 0x25EAA8u;
            goto label_25eaa8;
        }
    }
    ctx->pc = 0x25EA9Cu;
label_25ea9c:
    // 0x25ea9c: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25ea9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_25eaa0:
    // 0x25eaa0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25eaa4:
    if (ctx->pc == 0x25EAA4u) {
        ctx->pc = 0x25EAA4u;
            // 0x25eaa4: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x25EAA8u;
        goto label_25eaa8;
    }
    ctx->pc = 0x25EAA0u;
    {
        const bool branch_taken_0x25eaa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EAA0u;
            // 0x25eaa4: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eaa0) {
            ctx->pc = 0x25EAB0u;
            goto label_25eab0;
        }
    }
    ctx->pc = 0x25EAA8u;
label_25eaa8:
    // 0x25eaa8: 0x10000029  b           . + 4 + (0x29 << 2)
label_25eaac:
    if (ctx->pc == 0x25EAACu) {
        ctx->pc = 0x25EAACu;
            // 0x25eaac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25EAB0u;
        goto label_25eab0;
    }
    ctx->pc = 0x25EAA8u;
    {
        const bool branch_taken_0x25eaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EAA8u;
            // 0x25eaac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eaa8) {
            ctx->pc = 0x25EB50u;
            goto label_25eb50;
        }
    }
    ctx->pc = 0x25EAB0u;
label_25eab0:
    // 0x25eab0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25eab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25eab4:
    // 0x25eab4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x25eab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_25eab8:
    // 0x25eab8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x25eab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25eabc:
    // 0x25eabc: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_25eac0:
    if (ctx->pc == 0x25EAC0u) {
        ctx->pc = 0x25EAC4u;
        goto label_25eac4;
    }
    ctx->pc = 0x25EABCu;
    {
        const bool branch_taken_0x25eabc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25eabc) {
            ctx->pc = 0x25EB34u;
            goto label_25eb34;
        }
    }
    ctx->pc = 0x25EAC4u;
label_25eac4:
    // 0x25eac4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_25eac8:
    if (ctx->pc == 0x25EAC8u) {
        ctx->pc = 0x25EAC8u;
            // 0x25eac8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25EACCu;
        goto label_25eacc;
    }
    ctx->pc = 0x25EAC4u;
    {
        const bool branch_taken_0x25eac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EAC4u;
            // 0x25eac8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eac4) {
            ctx->pc = 0x25EB08u;
            goto label_25eb08;
        }
    }
    ctx->pc = 0x25EACCu;
label_25eacc:
    // 0x25eacc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_25ead0:
    if (ctx->pc == 0x25EAD0u) {
        ctx->pc = 0x25EAD4u;
        goto label_25ead4;
    }
    ctx->pc = 0x25EACCu;
    {
        const bool branch_taken_0x25eacc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25eacc) {
            ctx->pc = 0x25EADCu;
            goto label_25eadc;
        }
    }
    ctx->pc = 0x25EAD4u;
label_25ead4:
    // 0x25ead4: 0x1000001e  b           . + 4 + (0x1E << 2)
label_25ead8:
    if (ctx->pc == 0x25EAD8u) {
        ctx->pc = 0x25EAD8u;
            // 0x25ead8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25EADCu;
        goto label_25eadc;
    }
    ctx->pc = 0x25EAD4u;
    {
        const bool branch_taken_0x25ead4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EAD4u;
            // 0x25ead8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ead4) {
            ctx->pc = 0x25EB50u;
            goto label_25eb50;
        }
    }
    ctx->pc = 0x25EADCu;
label_25eadc:
    // 0x25eadc: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x25eadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25eae0:
    // 0x25eae0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_25eae4:
    if (ctx->pc == 0x25EAE4u) {
        ctx->pc = 0x25EAE4u;
            // 0x25eae4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25EAE8u;
        goto label_25eae8;
    }
    ctx->pc = 0x25EAE0u;
    {
        const bool branch_taken_0x25eae0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EAE0u;
            // 0x25eae4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eae0) {
            ctx->pc = 0x25EAF0u;
            goto label_25eaf0;
        }
    }
    ctx->pc = 0x25EAE8u;
label_25eae8:
    // 0x25eae8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_25eaec:
    if (ctx->pc == 0x25EAECu) {
        ctx->pc = 0x25EAECu;
            // 0x25eaec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x25EAF0u;
        goto label_25eaf0;
    }
    ctx->pc = 0x25EAE8u;
    {
        const bool branch_taken_0x25eae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EAE8u;
            // 0x25eaec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eae8) {
            ctx->pc = 0x25EB54u;
            goto label_25eb54;
        }
    }
    ctx->pc = 0x25EAF0u;
label_25eaf0:
    // 0x25eaf0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25eaf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25eaf4:
    // 0x25eaf4: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x25eaf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_25eaf8:
    // 0x25eaf8: 0x320f809  jalr        $t9
label_25eafc:
    if (ctx->pc == 0x25EAFCu) {
        ctx->pc = 0x25EAFCu;
            // 0x25eafc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25EB00u;
        goto label_25eb00;
    }
    ctx->pc = 0x25EAF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25EB00u);
        ctx->pc = 0x25EAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EAF8u;
            // 0x25eafc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25EB00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25EB00u; }
            if (ctx->pc != 0x25EB00u) { return; }
        }
        }
    }
    ctx->pc = 0x25EB00u;
label_25eb00:
    // 0x25eb00: 0x10000013  b           . + 4 + (0x13 << 2)
label_25eb04:
    if (ctx->pc == 0x25EB04u) {
        ctx->pc = 0x25EB04u;
            // 0x25eb04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25EB08u;
        goto label_25eb08;
    }
    ctx->pc = 0x25EB00u;
    {
        const bool branch_taken_0x25eb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EB00u;
            // 0x25eb04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eb00) {
            ctx->pc = 0x25EB50u;
            goto label_25eb50;
        }
    }
    ctx->pc = 0x25EB08u;
label_25eb08:
    // 0x25eb08: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x25eb08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25eb0c:
    // 0x25eb0c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_25eb10:
    if (ctx->pc == 0x25EB10u) {
        ctx->pc = 0x25EB10u;
            // 0x25eb10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25EB14u;
        goto label_25eb14;
    }
    ctx->pc = 0x25EB0Cu;
    {
        const bool branch_taken_0x25eb0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EB0Cu;
            // 0x25eb10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eb0c) {
            ctx->pc = 0x25EB1Cu;
            goto label_25eb1c;
        }
    }
    ctx->pc = 0x25EB14u;
label_25eb14:
    // 0x25eb14: 0x1000000e  b           . + 4 + (0xE << 2)
label_25eb18:
    if (ctx->pc == 0x25EB18u) {
        ctx->pc = 0x25EB1Cu;
        goto label_25eb1c;
    }
    ctx->pc = 0x25EB14u;
    {
        const bool branch_taken_0x25eb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25eb14) {
            ctx->pc = 0x25EB50u;
            goto label_25eb50;
        }
    }
    ctx->pc = 0x25EB1Cu;
label_25eb1c:
    // 0x25eb1c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25eb1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25eb20:
    // 0x25eb20: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x25eb20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_25eb24:
    // 0x25eb24: 0x320f809  jalr        $t9
label_25eb28:
    if (ctx->pc == 0x25EB28u) {
        ctx->pc = 0x25EB28u;
            // 0x25eb28: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25EB2Cu;
        goto label_25eb2c;
    }
    ctx->pc = 0x25EB24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25EB2Cu);
        ctx->pc = 0x25EB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EB24u;
            // 0x25eb28: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25EB2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25EB2Cu; }
            if (ctx->pc != 0x25EB2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x25EB2Cu;
label_25eb2c:
    // 0x25eb2c: 0x10000008  b           . + 4 + (0x8 << 2)
label_25eb30:
    if (ctx->pc == 0x25EB30u) {
        ctx->pc = 0x25EB30u;
            // 0x25eb30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25EB34u;
        goto label_25eb34;
    }
    ctx->pc = 0x25EB2Cu;
    {
        const bool branch_taken_0x25eb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EB2Cu;
            // 0x25eb30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eb2c) {
            ctx->pc = 0x25EB50u;
            goto label_25eb50;
        }
    }
    ctx->pc = 0x25EB34u;
label_25eb34:
    // 0x25eb34: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x25eb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25eb38:
    // 0x25eb38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25eb3c:
    if (ctx->pc == 0x25EB3Cu) {
        ctx->pc = 0x25EB40u;
        goto label_25eb40;
    }
    ctx->pc = 0x25EB38u;
    {
        const bool branch_taken_0x25eb38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25eb38) {
            ctx->pc = 0x25EB48u;
            goto label_25eb48;
        }
    }
    ctx->pc = 0x25EB40u;
label_25eb40:
    // 0x25eb40: 0x10000003  b           . + 4 + (0x3 << 2)
label_25eb44:
    if (ctx->pc == 0x25EB44u) {
        ctx->pc = 0x25EB44u;
            // 0x25eb44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25EB48u;
        goto label_25eb48;
    }
    ctx->pc = 0x25EB40u;
    {
        const bool branch_taken_0x25eb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EB40u;
            // 0x25eb44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eb40) {
            ctx->pc = 0x25EB50u;
            goto label_25eb50;
        }
    }
    ctx->pc = 0x25EB48u;
label_25eb48:
    // 0x25eb48: 0xac460010  sw          $a2, 0x10($v0)
    ctx->pc = 0x25eb48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
label_25eb4c:
    // 0x25eb4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25eb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25eb50:
    // 0x25eb50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25eb50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25eb54:
    // 0x25eb54: 0x3e00008  jr          $ra
label_25eb58:
    if (ctx->pc == 0x25EB58u) {
        ctx->pc = 0x25EB58u;
            // 0x25eb58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x25EB5Cu;
        goto label_fallthrough_0x25eb54;
    }
    ctx->pc = 0x25EB54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25EB54u;
            // 0x25eb58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x25eb54:
    ctx->pc = 0x25EB5Cu;
}
