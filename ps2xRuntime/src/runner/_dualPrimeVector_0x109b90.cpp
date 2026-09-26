#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _dualPrimeVector
// Address: 0x109b90 - 0x109d14
void _dualPrimeVector_0x109b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_dualPrimeVector_0x109b90");
#endif

    switch (ctx->pc) {
        case 0x109c24u: goto label_109c24;
        case 0x109c28u: goto label_109c28;
        default: break;
    }

    ctx->pc = 0x109b90u;

    // 0x109b90: 0x8c830174  lw          $v1, 0x174($a0)
    ctx->pc = 0x109b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
    // 0x109b94: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x109b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x109b98: 0x14620045  bne         $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x109B98u;
    {
        const bool branch_taken_0x109b98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x109b98) {
            ctx->pc = 0x109CB0u;
            goto label_109cb0;
        }
    }
    ctx->pc = 0x109BA0u;
    // 0x109ba0: 0x8c820178  lw          $v0, 0x178($a0)
    ctx->pc = 0x109ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 376)));
    // 0x109ba4: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x109BA4u;
    {
        const bool branch_taken_0x109ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x109ba4) {
            ctx->pc = 0x109BA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x109BA4u;
            // 0x109ba8: 0x71040  sll         $v0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x109C38u;
            goto label_109c38;
        }
    }
    ctx->pc = 0x109BACu;
    // 0x109bac: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x109BACu;
    {
        const bool branch_taken_0x109bac = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x109BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109BACu;
            // 0x109bb0: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109bac) {
            ctx->pc = 0x109BC0u;
            goto label_109bc0;
        }
    }
    ctx->pc = 0x109BB4u;
    // 0x109bb4: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x109bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x109bb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x109BB8u;
    {
        const bool branch_taken_0x109bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109BB8u;
            // 0x109bbc: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109bb8) {
            ctx->pc = 0x109BC4u;
            goto label_109bc4;
        }
    }
    ctx->pc = 0x109BC0u;
label_109bc0:
    // 0x109bc0: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x109bc0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_109bc4:
    // 0x109bc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x109bc8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x109bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x109bcc: 0x19000004  blez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x109BCCu;
    {
        const bool branch_taken_0x109bcc = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x109BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109BCCu;
            // 0x109bd0: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109bcc) {
            ctx->pc = 0x109BE0u;
            goto label_109be0;
        }
    }
    ctx->pc = 0x109BD4u;
    // 0x109bd4: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x109bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x109bd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x109BD8u;
    {
        const bool branch_taken_0x109bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109BD8u;
            // 0x109bdc: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109bd8) {
            ctx->pc = 0x109BE4u;
            goto label_109be4;
        }
    }
    ctx->pc = 0x109BE0u;
label_109be0:
    // 0x109be0: 0x81043  sra         $v0, $t0, 1
    ctx->pc = 0x109be0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
label_109be4:
    // 0x109be4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x109be8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x109be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x109bec: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x109becu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x109bf0: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x109bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x109bf4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x109bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x109bf8: 0x18e00002  blez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x109BF8u;
    {
        const bool branch_taken_0x109bf8 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x109BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109BF8u;
            // 0x109bfc: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109bf8) {
            ctx->pc = 0x109C04u;
            goto label_109c04;
        }
    }
    ctx->pc = 0x109C00u;
    // 0x109c00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x109c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_109c04:
    // 0x109c04: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x109c04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x109c08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x109c0c: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x109c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x109c10: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x109c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x109c14: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x109c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x109c18: 0x19000002  blez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x109C18u;
    {
        const bool branch_taken_0x109c18 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x109C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109C18u;
            // 0x109c1c: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109c18) {
            ctx->pc = 0x109C24u;
            goto label_109c24;
        }
    }
    ctx->pc = 0x109C20u;
    // 0x109c20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x109c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_109c24:
    // 0x109c24: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x109c24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_109c28:
    // 0x109c28: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x109c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x109c2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x109c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x109c30: 0x3e00008  jr          $ra
    ctx->pc = 0x109C30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109C30u;
            // 0x109c34: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x109C38u;
label_109c38:
    // 0x109c38: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x109c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x109c3c: 0x18e00002  blez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x109C3Cu;
    {
        const bool branch_taken_0x109c3c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x109C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109C3Cu;
            // 0x109c40: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109c3c) {
            ctx->pc = 0x109C48u;
            goto label_109c48;
        }
    }
    ctx->pc = 0x109C44u;
    // 0x109c44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x109c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_109c48:
    // 0x109c48: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x109c48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x109c4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x109c50: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x109c50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x109c54: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x109c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x109c58: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x109c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x109c5c: 0x19000002  blez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x109C5Cu;
    {
        const bool branch_taken_0x109c5c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x109C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109C5Cu;
            // 0x109c60: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109c5c) {
            ctx->pc = 0x109C68u;
            goto label_109c68;
        }
    }
    ctx->pc = 0x109C64u;
    // 0x109c64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x109c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_109c68:
    // 0x109c68: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x109c68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x109c6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x109c70: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x109c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x109c74: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x109c74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x109c78: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x109C78u;
    {
        const bool branch_taken_0x109c78 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x109C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109C78u;
            // 0x109c7c: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109c78) {
            ctx->pc = 0x109C8Cu;
            goto label_109c8c;
        }
    }
    ctx->pc = 0x109C80u;
    // 0x109c80: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x109c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x109c84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x109C84u;
    {
        const bool branch_taken_0x109c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109C84u;
            // 0x109c88: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109c84) {
            ctx->pc = 0x109C90u;
            goto label_109c90;
        }
    }
    ctx->pc = 0x109C8Cu;
label_109c8c:
    // 0x109c8c: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x109c8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_109c90:
    // 0x109c90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x109c94: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x109c94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x109c98: 0x19000003  blez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x109C98u;
    {
        const bool branch_taken_0x109c98 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x109C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109C98u;
            // 0x109c9c: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109c98) {
            ctx->pc = 0x109CA8u;
            goto label_109ca8;
        }
    }
    ctx->pc = 0x109CA0u;
    // 0x109ca0: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x109CA0u;
    {
        const bool branch_taken_0x109ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109CA0u;
            // 0x109ca4: 0x25020001  addiu       $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ca0) {
            ctx->pc = 0x109C24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_109c24;
        }
    }
    ctx->pc = 0x109CA8u;
label_109ca8:
    // 0x109ca8: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x109CA8u;
    {
        const bool branch_taken_0x109ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109CA8u;
            // 0x109cac: 0x81043  sra         $v0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ca8) {
            ctx->pc = 0x109C28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_109c28;
        }
    }
    ctx->pc = 0x109CB0u;
label_109cb0:
    // 0x109cb0: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x109CB0u;
    {
        const bool branch_taken_0x109cb0 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x109CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109CB0u;
            // 0x109cb4: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109cb0) {
            ctx->pc = 0x109CC4u;
            goto label_109cc4;
        }
    }
    ctx->pc = 0x109CB8u;
    // 0x109cb8: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x109cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x109cbc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x109CBCu;
    {
        const bool branch_taken_0x109cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109CBCu;
            // 0x109cc0: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109cbc) {
            ctx->pc = 0x109CC8u;
            goto label_109cc8;
        }
    }
    ctx->pc = 0x109CC4u;
label_109cc4:
    // 0x109cc4: 0x71043  sra         $v0, $a3, 1
    ctx->pc = 0x109cc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
label_109cc8:
    // 0x109cc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x109cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x109ccc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x109cccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x109cd0: 0x19000004  blez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x109CD0u;
    {
        const bool branch_taken_0x109cd0 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x109CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109CD0u;
            // 0x109cd4: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109cd0) {
            ctx->pc = 0x109CE4u;
            goto label_109ce4;
        }
    }
    ctx->pc = 0x109CD8u;
    // 0x109cd8: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x109cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x109cdc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x109CDCu;
    {
        const bool branch_taken_0x109cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109CDCu;
            // 0x109ce0: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109cdc) {
            ctx->pc = 0x109CE8u;
            goto label_109ce8;
        }
    }
    ctx->pc = 0x109CE4u;
label_109ce4:
    // 0x109ce4: 0x81043  sra         $v0, $t0, 1
    ctx->pc = 0x109ce4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 1));
label_109ce8:
    // 0x109ce8: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x109ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x109cec: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x109cecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x109cf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x109cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109cf4: 0x8c820174  lw          $v0, 0x174($a0)
    ctx->pc = 0x109cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
    // 0x109cf8: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x109CF8u;
    {
        const bool branch_taken_0x109cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x109CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109CF8u;
            // 0x109cfc: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109cf8) {
            ctx->pc = 0x109D0Cu;
            goto label_109d0c;
        }
    }
    ctx->pc = 0x109D00u;
    // 0x109d00: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x109d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x109d04: 0x3e00008  jr          $ra
    ctx->pc = 0x109D04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109D04u;
            // 0x109d08: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x109D0Cu;
label_109d0c:
    // 0x109d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x109D0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109D0Cu;
            // 0x109d10: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x109D14u;
}
