#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ftoi
// Address: 0x111aa0 - 0x111b30
void ftoi_0x111aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ftoi_0x111aa0");
#endif

    ctx->pc = 0x111aa0u;

    // 0x111aa0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x111aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111aa4: 0x51078  dsll        $v0, $a1, 1
    ctx->pc = 0x111aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 1);
    // 0x111aa8: 0x2357e  dsrl32      $a2, $v0, 21
    ctx->pc = 0x111aa8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 21));
    // 0x111aac: 0x64c6fbcd  daddiu      $a2, $a2, -0x433
    ctx->pc = 0x111aacu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294966221);
    // 0x111ab0: 0x28c2ffcb  slti        $v0, $a2, -0x35
    ctx->pc = 0x111ab0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967243) ? 1 : 0);
    // 0x111ab4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x111AB4u;
    {
        const bool branch_taken_0x111ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111AB4u;
            // 0x111ab8: 0x28c2000d  slti        $v0, $a2, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111ab4) {
            ctx->pc = 0x111AC4u;
            goto label_111ac4;
        }
    }
    ctx->pc = 0x111ABCu;
    // 0x111abc: 0x3e00008  jr          $ra
    ctx->pc = 0x111ABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111ABCu;
            // 0x111ac0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x111AC4u;
label_111ac4:
    // 0x111ac4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x111AC4u;
    {
        const bool branch_taken_0x111ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111AC4u;
            // 0x111ac8: 0x51338  dsll        $v0, $a1, 12 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111ac4) {
            ctx->pc = 0x111AD4u;
            goto label_111ad4;
        }
    }
    ctx->pc = 0x111ACCu;
    // 0x111acc: 0x3e00008  jr          $ra
    ctx->pc = 0x111ACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111ACCu;
            // 0x111ad0: 0x2402270f  addiu       $v0, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x111AD4u;
label_111ad4:
    // 0x111ad4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x111ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x111ad8: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x111ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x111adc: 0x22b3a  dsrl        $a1, $v0, 12
    ctx->pc = 0x111adcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 12);
    // 0x111ae0: 0x4c1000d  bgez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x111AE0u;
    {
        const bool branch_taken_0x111ae0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x111AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111AE0u;
            // 0x111ae4: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111ae0) {
            ctx->pc = 0x111B18u;
            goto label_111b18;
        }
    }
    ctx->pc = 0x111AE8u;
    // 0x111ae8: 0x6302f  dsubu       $a2, $zero, $a2
    ctx->pc = 0x111ae8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 6));
    // 0x111aec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x111aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x111af0: 0x64c3fffe  daddiu      $v1, $a2, -0x2
    ctx->pc = 0x111af0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967294);
    // 0x111af4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x111af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x111af8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x111af8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x111afc: 0x652816  dsrlv       $a1, $a1, $v1
    ctx->pc = 0x111afcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x111b00: 0x30a40003  andi        $a0, $a1, 0x3
    ctx->pc = 0x111b00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x111b04: 0x54820007  bnel        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x111B04u;
    {
        const bool branch_taken_0x111b04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x111b04) {
            ctx->pc = 0x111B08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x111B04u;
            // 0x111b08: 0x528ba  dsrl        $a1, $a1, 2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x111B24u;
            goto label_111b24;
        }
    }
    ctx->pc = 0x111B0Cu;
    // 0x111b0c: 0x510ba  dsrl        $v0, $a1, 2
    ctx->pc = 0x111b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> 2);
    // 0x111b10: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x111B10u;
    {
        const bool branch_taken_0x111b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111B10u;
            // 0x111b14: 0x64450001  daddiu      $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111b10) {
            ctx->pc = 0x111B24u;
            goto label_111b24;
        }
    }
    ctx->pc = 0x111B18u;
label_111b18:
    // 0x111b18: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x111b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x111b1c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x111b1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x111b20: 0x452814  dsllv       $a1, $a1, $v0
    ctx->pc = 0x111b20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (GPR_U32(ctx, 2) & 0x3F));
label_111b24:
    // 0x111b24: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x111b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x111b28: 0x3e00008  jr          $ra
    ctx->pc = 0x111B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111B28u;
            // 0x111b2c: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x111B30u;
}
