#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteParent__8mgCFrameFv
// Address: 0x136bc0 - 0x136c28
void DeleteParent__8mgCFrameFv_0x136bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteParent__8mgCFrameFv_0x136bc0");
#endif

    ctx->pc = 0x136bc0u;

    // 0x136bc0: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x136bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x136bc4: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x136BC4u;
    {
        const bool branch_taken_0x136bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x136BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136BC4u;
            // 0x136bc8: 0x24650058  addiu       $a1, $v1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136bc4) {
            ctx->pc = 0x136C20u;
            goto label_136c20;
        }
    }
    ctx->pc = 0x136BCCu;
    // 0x136bcc: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x136bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x136bd0: 0x1464000b  bne         $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x136BD0u;
    {
        const bool branch_taken_0x136bd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x136bd0) {
            ctx->pc = 0x136C00u;
            goto label_136c00;
        }
    }
    ctx->pc = 0x136BD8u;
    // 0x136bd8: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x136bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x136bdc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x136bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x136be0: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x136be0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x136be4: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x136be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x136be8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x136BE8u;
    {
        const bool branch_taken_0x136be8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x136be8) {
            ctx->pc = 0x136BF4u;
            goto label_136bf4;
        }
    }
    ctx->pc = 0x136BF0u;
    // 0x136bf0: 0xac600060  sw          $zero, 0x60($v1)
    ctx->pc = 0x136bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
label_136bf4:
    // 0x136bf4: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x136bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x136bf8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x136BF8u;
    {
        const bool branch_taken_0x136bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136BF8u;
            // 0x136bfc: 0xac800060  sw          $zero, 0x60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136bf8) {
            ctx->pc = 0x136C20u;
            goto label_136c20;
        }
    }
    ctx->pc = 0x136C00u;
label_136c00:
    // 0x136c00: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x136c00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x136c04: 0x8c850060  lw          $a1, 0x60($a0)
    ctx->pc = 0x136c04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x136c08: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x136C08u;
    {
        const bool branch_taken_0x136c08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x136c08) {
            ctx->pc = 0x136C18u;
            goto label_136c18;
        }
    }
    ctx->pc = 0x136C10u;
    // 0x136c10: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x136c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x136c14: 0xaca3005c  sw          $v1, 0x5C($a1)
    ctx->pc = 0x136c14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 92), GPR_U32(ctx, 3));
label_136c18:
    // 0x136c18: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x136c18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x136c1c: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x136c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
label_136c20:
    // 0x136c20: 0x3e00008  jr          $ra
    ctx->pc = 0x136C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x136C28u;
}
