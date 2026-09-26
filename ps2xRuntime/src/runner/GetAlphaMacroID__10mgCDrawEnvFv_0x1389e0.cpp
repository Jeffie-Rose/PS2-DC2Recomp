#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetAlphaMacroID__10mgCDrawEnvFv
// Address: 0x1389e0 - 0x138a3c
void GetAlphaMacroID__10mgCDrawEnvFv_0x1389e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetAlphaMacroID__10mgCDrawEnvFv_0x1389e0");
#endif

    ctx->pc = 0x1389e0u;

    // 0x1389e0: 0xdc840030  ld          $a0, 0x30($a0)
    ctx->pc = 0x1389e0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1389e4: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x1389e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1389e8: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1389E8u;
    {
        const bool branch_taken_0x1389e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1389ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1389E8u;
            // 0x1389ec: 0x24020042  addiu       $v0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1389e8) {
            ctx->pc = 0x1389F8u;
            goto label_1389f8;
        }
    }
    ctx->pc = 0x1389F0u;
    // 0x1389f0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1389F0u;
    {
        const bool branch_taken_0x1389f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1389F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1389F0u;
            // 0x1389f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1389f0) {
            ctx->pc = 0x138A34u;
            goto label_138a34;
        }
    }
    ctx->pc = 0x1389F8u;
label_1389f8:
    // 0x1389f8: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1389F8u;
    {
        const bool branch_taken_0x1389f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1389FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1389F8u;
            // 0x1389fc: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1389f8) {
            ctx->pc = 0x138A08u;
            goto label_138a08;
        }
    }
    ctx->pc = 0x138A00u;
    // 0x138a00: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x138A00u;
    {
        const bool branch_taken_0x138a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138A00u;
            // 0x138a04: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a00) {
            ctx->pc = 0x138A34u;
            goto label_138a34;
        }
    }
    ctx->pc = 0x138A08u;
label_138a08:
    // 0x138a08: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x138A08u;
    {
        const bool branch_taken_0x138a08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x138A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138A08u;
            // 0x138a0c: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a08) {
            ctx->pc = 0x138A18u;
            goto label_138a18;
        }
    }
    ctx->pc = 0x138A10u;
    // 0x138a10: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x138A10u;
    {
        const bool branch_taken_0x138a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138A10u;
            // 0x138a14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a10) {
            ctx->pc = 0x138A34u;
            goto label_138a34;
        }
    }
    ctx->pc = 0x138A18u;
label_138a18:
    // 0x138a18: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x138a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x138a1c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x138a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x138a20: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x138a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x138a24: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x138A24u;
    {
        const bool branch_taken_0x138a24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x138A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138A24u;
            // 0x138a28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a24) {
            ctx->pc = 0x138A34u;
            goto label_138a34;
        }
    }
    ctx->pc = 0x138A2Cu;
    // 0x138a2c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x138A2Cu;
    {
        const bool branch_taken_0x138a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138A2Cu;
            // 0x138a30: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a2c) {
            ctx->pc = 0x138A34u;
            goto label_138a34;
        }
    }
    ctx->pc = 0x138A34u;
label_138a34:
    // 0x138a34: 0x3e00008  jr          $ra
    ctx->pc = 0x138A34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x138A3Cu;
}
