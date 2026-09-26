#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EndData__13mgCMDTBuilderFv
// Address: 0x133fc0 - 0x1340c8
void EndData__13mgCMDTBuilderFv_0x133fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EndData__13mgCMDTBuilderFv_0x133fc0");
#endif

    ctx->pc = 0x133fc0u;

    // 0x133fc0: 0x8c850028  lw          $a1, 0x28($a0)
    ctx->pc = 0x133fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x133fc4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x133fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x133fc8: 0x10a30033  beq         $a1, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x133FC8u;
    {
        const bool branch_taken_0x133fc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x133fc8) {
            ctx->pc = 0x134098u;
            goto label_134098;
        }
    }
    ctx->pc = 0x133FD0u;
    // 0x133fd0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x133fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x133fd4: 0x10a30027  beq         $a1, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x133FD4u;
    {
        const bool branch_taken_0x133fd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x133fd4) {
            ctx->pc = 0x134074u;
            goto label_134074;
        }
    }
    ctx->pc = 0x133FDCu;
    // 0x133fdc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x133fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x133fe0: 0x10a3001b  beq         $a1, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x133FE0u;
    {
        const bool branch_taken_0x133fe0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x133fe0) {
            ctx->pc = 0x134050u;
            goto label_134050;
        }
    }
    ctx->pc = 0x133FE8u;
    // 0x133fe8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x133fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x133fec: 0x10a3000f  beq         $a1, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x133FECu;
    {
        const bool branch_taken_0x133fec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x133fec) {
            ctx->pc = 0x13402Cu;
            goto label_13402c;
        }
    }
    ctx->pc = 0x133FF4u;
    // 0x133ff4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x133ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133ff8: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x133FF8u;
    {
        const bool branch_taken_0x133ff8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x133ff8) {
            ctx->pc = 0x134008u;
            goto label_134008;
        }
    }
    ctx->pc = 0x134000u;
    // 0x134000: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x134000u;
    {
        const bool branch_taken_0x134000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134000) {
            ctx->pc = 0x1340B4u;
            goto label_1340b4;
        }
    }
    ctx->pc = 0x134008u;
label_134008:
    // 0x134008: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x134008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13400c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x13400cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x134010: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x134010u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x134014: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x134014u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x134018: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x134018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13401c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x13401cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x134020: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x134020u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x134024: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x134024u;
    {
        const bool branch_taken_0x134024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134024) {
            ctx->pc = 0x1340B4u;
            goto label_1340b4;
        }
    }
    ctx->pc = 0x13402Cu;
label_13402c:
    // 0x13402c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x13402cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x134030: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x134030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x134034: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x134034u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x134038: 0xaca30020  sw          $v1, 0x20($a1)
    ctx->pc = 0x134038u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
    // 0x13403c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x13403cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x134040: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x134040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x134044: 0xac65001c  sw          $a1, 0x1C($v1)
    ctx->pc = 0x134044u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 5));
    // 0x134048: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x134048u;
    {
        const bool branch_taken_0x134048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134048) {
            ctx->pc = 0x1340B4u;
            goto label_1340b4;
        }
    }
    ctx->pc = 0x134050u;
label_134050:
    // 0x134050: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x134050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x134054: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x134054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x134058: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x134058u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13405c: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x13405cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x134060: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x134060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x134064: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x134064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x134068: 0xac650014  sw          $a1, 0x14($v1)
    ctx->pc = 0x134068u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
    // 0x13406c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x13406Cu;
    {
        const bool branch_taken_0x13406c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13406c) {
            ctx->pc = 0x1340B4u;
            goto label_1340b4;
        }
    }
    ctx->pc = 0x134074u;
label_134074:
    // 0x134074: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x134074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x134078: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x134078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13407c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x13407cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x134080: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x134080u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x134084: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x134084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x134088: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x134088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13408c: 0xac65002c  sw          $a1, 0x2C($v1)
    ctx->pc = 0x13408cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 5));
    // 0x134090: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x134090u;
    {
        const bool branch_taken_0x134090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134090) {
            ctx->pc = 0x1340B4u;
            goto label_1340b4;
        }
    }
    ctx->pc = 0x134098u;
label_134098:
    // 0x134098: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x134098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13409c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x13409cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1340a0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1340a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1340a4: 0xaca30038  sw          $v1, 0x38($a1)
    ctx->pc = 0x1340a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 3));
    // 0x1340a8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1340a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1340ac: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1340acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1340b0: 0xac650034  sw          $a1, 0x34($v1)
    ctx->pc = 0x1340b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 5));
label_1340b4:
    // 0x1340b4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1340b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1340b8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1340b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1340bc: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1340bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1340c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1340C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1340C8u;
}
