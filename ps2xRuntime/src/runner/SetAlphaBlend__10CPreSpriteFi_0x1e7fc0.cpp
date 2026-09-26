#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetAlphaBlend__10CPreSpriteFi
// Address: 0x1e7fc0 - 0x1e8084
void SetAlphaBlend__10CPreSpriteFi_0x1e7fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetAlphaBlend__10CPreSpriteFi_0x1e7fc0");
#endif

    ctx->pc = 0x1e7fc0u;

    // 0x1e7fc0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1e7fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e7fc4: 0x10a30023  beq         $a1, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1E7FC4u;
    {
        const bool branch_taken_0x1e7fc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E7FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7FC4u;
            // 0x1e7fc8: 0x8c8700dc  lw          $a3, 0xDC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7fc4) {
            ctx->pc = 0x1E8054u;
            goto label_1e8054;
        }
    }
    ctx->pc = 0x1E7FCCu;
    // 0x1e7fcc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1e7fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e7fd0: 0x10a3001a  beq         $a1, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1E7FD0u;
    {
        const bool branch_taken_0x1e7fd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E7FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7FD0u;
            // 0x1e7fd4: 0x24030042  addiu       $v1, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7fd0) {
            ctx->pc = 0x1E803Cu;
            goto label_1e803c;
        }
    }
    ctx->pc = 0x1E7FD8u;
    // 0x1e7fd8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e7fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e7fdc: 0x10a3000f  beq         $a1, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1E7FDCu;
    {
        const bool branch_taken_0x1e7fdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E7FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7FDCu;
            // 0x1e7fe0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7fdc) {
            ctx->pc = 0x1E801Cu;
            goto label_1e801c;
        }
    }
    ctx->pc = 0x1E7FE4u;
    // 0x1e7fe4: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E7FE4u;
    {
        const bool branch_taken_0x1e7fe4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e7fe4) {
            ctx->pc = 0x1E7FFCu;
            goto label_1e7ffc;
        }
    }
    ctx->pc = 0x1E7FECu;
    // 0x1e7fec: 0x10a00023  beqz        $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1E7FECu;
    {
        const bool branch_taken_0x1e7fec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7fec) {
            ctx->pc = 0x1E807Cu;
            goto label_1e807c;
        }
    }
    ctx->pc = 0x1E7FF4u;
    // 0x1e7ff4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1E7FF4u;
    {
        const bool branch_taken_0x1e7ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7ff4) {
            ctx->pc = 0x1E807Cu;
            goto label_1e807c;
        }
    }
    ctx->pc = 0x1E7FFCu;
label_1e7ffc:
    // 0x1e7ffc: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x1e7ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1e8000: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1e8000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e8004: 0xfce50000  sd          $a1, 0x0($a3)
    ctx->pc = 0x1e8004u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 5));
    // 0x1e8008: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x1e8008u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x1e800c: 0x8c8300dc  lw          $v1, 0xDC($a0)
    ctx->pc = 0x1e800cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x1e8010: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1e8010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1e8014: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1E8014u;
    {
        const bool branch_taken_0x1e8014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8014u;
            // 0x1e8018: 0xac8300dc  sw          $v1, 0xDC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8014) {
            ctx->pc = 0x1E807Cu;
            goto label_1e807c;
        }
    }
    ctx->pc = 0x1E801Cu;
label_1e801c:
    // 0x1e801c: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1e801cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1e8020: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1e8020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e8024: 0xfce50000  sd          $a1, 0x0($a3)
    ctx->pc = 0x1e8024u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 5));
    // 0x1e8028: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x1e8028u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x1e802c: 0x8c8300dc  lw          $v1, 0xDC($a0)
    ctx->pc = 0x1e802cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x1e8030: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1e8030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1e8034: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1E8034u;
    {
        const bool branch_taken_0x1e8034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8034u;
            // 0x1e8038: 0xac8300dc  sw          $v1, 0xDC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8034) {
            ctx->pc = 0x1E807Cu;
            goto label_1e807c;
        }
    }
    ctx->pc = 0x1E803Cu;
label_1e803c:
    // 0x1e803c: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x1e803cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x1e8040: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x1e8040u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x1e8044: 0x8c8300dc  lw          $v1, 0xDC($a0)
    ctx->pc = 0x1e8044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x1e8048: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1e8048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1e804c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E804Cu;
    {
        const bool branch_taken_0x1e804c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E804Cu;
            // 0x1e8050: 0xac8300dc  sw          $v1, 0xDC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e804c) {
            ctx->pc = 0x1E807Cu;
            goto label_1e807c;
        }
    }
    ctx->pc = 0x1E8054u;
label_1e8054:
    // 0x1e8054: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e8054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e8058: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x1e8058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1e805c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x1e805cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e8060: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1e8060u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1e8064: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1e8064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e8068: 0xfce50000  sd          $a1, 0x0($a3)
    ctx->pc = 0x1e8068u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 5));
    // 0x1e806c: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x1e806cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x1e8070: 0x8c8300dc  lw          $v1, 0xDC($a0)
    ctx->pc = 0x1e8070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x1e8074: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1e8074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1e8078: 0xac8300dc  sw          $v1, 0xDC($a0)
    ctx->pc = 0x1e8078u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 3));
label_1e807c:
    // 0x1e807c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E807Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E8084u;
}
