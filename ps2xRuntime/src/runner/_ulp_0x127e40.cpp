#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ulp
// Address: 0x127e40 - 0x127ed8
void _ulp_0x127e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ulp_0x127e40");
#endif

    ctx->pc = 0x127e40u;

    // 0x127e40: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x127e40u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x127e44: 0x3c027ff0  lui         $v0, 0x7FF0
    ctx->pc = 0x127e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
    // 0x127e48: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x127e48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x127e4c: 0x3c03fcc0  lui         $v1, 0xFCC0
    ctx->pc = 0x127e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64704 << 16));
    // 0x127e50: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x127e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x127e54: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x127E54u;
    {
        const bool branch_taken_0x127e54 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x127E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127E54u;
            // 0x127e58: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127e54) {
            ctx->pc = 0x127E64u;
            goto label_127e64;
        }
    }
    ctx->pc = 0x127E5Cu;
    // 0x127e5c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x127E5Cu;
    {
        const bool branch_taken_0x127e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127E5Cu;
            // 0x127e60: 0x4283c  dsll32      $a1, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127e5c) {
            ctx->pc = 0x127ECCu;
            goto label_127ecc;
        }
    }
    ctx->pc = 0x127E64u;
label_127e64:
    // 0x127e64: 0x41023  negu        $v0, $a0
    ctx->pc = 0x127e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x127e68: 0x22503  sra         $a0, $v0, 20
    ctx->pc = 0x127e68u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 20));
    // 0x127e6c: 0x28830014  slti        $v1, $a0, 0x14
    ctx->pc = 0x127e6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x127e70: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x127E70u;
    {
        const bool branch_taken_0x127e70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x127E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127E70u;
            // 0x127e74: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127e70) {
            ctx->pc = 0x127E84u;
            goto label_127e84;
        }
    }
    ctx->pc = 0x127E78u;
    // 0x127e78: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x127e78u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x127e7c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x127E7Cu;
    {
        const bool branch_taken_0x127e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127E7Cu;
            // 0x127e80: 0x2283c  dsll32      $a1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127e7c) {
            ctx->pc = 0x127ECCu;
            goto label_127ecc;
        }
    }
    ctx->pc = 0x127E84u;
label_127e84:
    // 0x127e84: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x127e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x127e88: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x127e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x127e8c: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x127e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x127e90: 0x2882001f  slti        $v0, $a0, 0x1F
    ctx->pc = 0x127e90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x127e94: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x127E94u;
    {
        const bool branch_taken_0x127e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127E94u;
            // 0x127e98: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127e94) {
            ctx->pc = 0x127EB0u;
            goto label_127eb0;
        }
    }
    ctx->pc = 0x127E9Cu;
    // 0x127e9c: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x127e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x127ea0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x127ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127ea4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x127ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x127ea8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x127EA8u;
    {
        const bool branch_taken_0x127ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127EA8u;
            // 0x127eac: 0x431004  sllv        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127ea8) {
            ctx->pc = 0x127EB4u;
            goto label_127eb4;
        }
    }
    ctx->pc = 0x127EB0u;
label_127eb0:
    // 0x127eb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x127eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127eb4:
    // 0x127eb4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x127eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x127eb8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x127eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x127ebc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x127ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x127ec0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x127ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x127ec4: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x127ec4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x127ec8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x127ec8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_127ecc:
    // 0x127ecc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x127eccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x127ED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127ED0u;
            // 0x127ed4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x127ED8u;
}
