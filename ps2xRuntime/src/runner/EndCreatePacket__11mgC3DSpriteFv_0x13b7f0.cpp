#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EndCreatePacket__11mgC3DSpriteFv
// Address: 0x13b7f0 - 0x13b860
void EndCreatePacket__11mgC3DSpriteFv_0x13b7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EndCreatePacket__11mgC3DSpriteFv_0x13b7f0");
#endif

    ctx->pc = 0x13b7f0u;

    // 0x13b7f0: 0x8c87002c  lw          $a3, 0x2C($a0)
    ctx->pc = 0x13b7f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x13b7f4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x13b7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x13b7f8: 0x34450001  ori         $a1, $v0, 0x1
    ctx->pc = 0x13b7f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x13b7fc: 0x3c031300  lui         $v1, 0x1300
    ctx->pc = 0x13b7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4864 << 16));
    // 0x13b800: 0x3c026000  lui         $v0, 0x6000
    ctx->pc = 0x13b800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24576 << 16));
    // 0x13b804: 0x24e60030  addiu       $a2, $a3, 0x30
    ctx->pc = 0x13b804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x13b808: 0xac86002c  sw          $a2, 0x2C($a0)
    ctx->pc = 0x13b808u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 6));
    // 0x13b80c: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x13b80cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x13b810: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x13b810u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x13b814: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x13b814u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x13b818: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x13b818u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x13b81c: 0xace30010  sw          $v1, 0x10($a3)
    ctx->pc = 0x13b81cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 3));
    // 0x13b820: 0xace00014  sw          $zero, 0x14($a3)
    ctx->pc = 0x13b820u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 0));
    // 0x13b824: 0xace00018  sw          $zero, 0x18($a3)
    ctx->pc = 0x13b824u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
    // 0x13b828: 0xace0001c  sw          $zero, 0x1C($a3)
    ctx->pc = 0x13b828u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
    // 0x13b82c: 0xace20020  sw          $v0, 0x20($a3)
    ctx->pc = 0x13b82cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 2));
    // 0x13b830: 0xace00024  sw          $zero, 0x24($a3)
    ctx->pc = 0x13b830u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 0));
    // 0x13b834: 0xace00028  sw          $zero, 0x28($a3)
    ctx->pc = 0x13b834u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 0));
    // 0x13b838: 0xace0002c  sw          $zero, 0x2C($a3)
    ctx->pc = 0x13b838u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 0));
    // 0x13b83c: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x13b83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x13b840: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x13b840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x13b844: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x13b844u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13b848: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B848u;
    {
        const bool branch_taken_0x13b848 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x13B84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B848u;
            // 0x13b84c: 0x22903  sra         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b848) {
            ctx->pc = 0x13B858u;
            goto label_13b858;
        }
    }
    ctx->pc = 0x13B850u;
    // 0x13b850: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x13b850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x13b854: 0x22903  sra         $a1, $v0, 4
    ctx->pc = 0x13b854u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
label_13b858:
    // 0x13b858: 0x804e748  j           func_139D20
    ctx->pc = 0x13B858u;
    ctx->pc = 0x13B85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B858u;
            // 0x13b85c: 0x8c840024  lw          $a0, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x13B860u;
}
