#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMaxPolyn__Fi
// Address: 0x2aa910 - 0x2aa978
void GetMaxPolyn__Fi_0x2aa910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMaxPolyn__Fi_0x2aa910");
#endif

    ctx->pc = 0x2aa910u;

    // 0x2aa910: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2aa910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2aa914: 0x10820016  beq         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2AA914u;
    {
        const bool branch_taken_0x2aa914 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AA918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA914u;
            // 0x2aa918: 0x24020fa0  addiu       $v0, $zero, 0xFA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa914) {
            ctx->pc = 0x2AA970u;
            goto label_2aa970;
        }
    }
    ctx->pc = 0x2AA91Cu;
    // 0x2aa91c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2aa91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2aa920: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2AA920u;
    {
        const bool branch_taken_0x2aa920 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AA924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA920u;
            // 0x2aa924: 0x24021770  addiu       $v0, $zero, 0x1770 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa920) {
            ctx->pc = 0x2AA968u;
            goto label_2aa968;
        }
    }
    ctx->pc = 0x2AA928u;
    // 0x2aa928: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2aa928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2aa92c: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2AA92Cu;
    {
        const bool branch_taken_0x2aa92c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AA930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA92Cu;
            // 0x2aa930: 0x24021770  addiu       $v0, $zero, 0x1770 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa92c) {
            ctx->pc = 0x2AA960u;
            goto label_2aa960;
        }
    }
    ctx->pc = 0x2AA934u;
    // 0x2aa934: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aa934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aa938: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AA938u;
    {
        const bool branch_taken_0x2aa938 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AA93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA938u;
            // 0x2aa93c: 0x24021770  addiu       $v0, $zero, 0x1770 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa938) {
            ctx->pc = 0x2AA958u;
            goto label_2aa958;
        }
    }
    ctx->pc = 0x2AA940u;
    // 0x2aa940: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA940u;
    {
        const bool branch_taken_0x2aa940 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA940u;
            // 0x2aa944: 0x24020fa0  addiu       $v0, $zero, 0xFA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa940) {
            ctx->pc = 0x2AA950u;
            goto label_2aa950;
        }
    }
    ctx->pc = 0x2AA948u;
    // 0x2aa948: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2AA948u;
    {
        const bool branch_taken_0x2aa948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA948u;
            // 0x2aa94c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa948) {
            ctx->pc = 0x2AA970u;
            goto label_2aa970;
        }
    }
    ctx->pc = 0x2AA950u;
label_2aa950:
    // 0x2aa950: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2AA950u;
    {
        const bool branch_taken_0x2aa950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa950) {
            ctx->pc = 0x2AA970u;
            goto label_2aa970;
        }
    }
    ctx->pc = 0x2AA958u;
label_2aa958:
    // 0x2aa958: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2AA958u;
    {
        const bool branch_taken_0x2aa958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa958) {
            ctx->pc = 0x2AA970u;
            goto label_2aa970;
        }
    }
    ctx->pc = 0x2AA960u;
label_2aa960:
    // 0x2aa960: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA960u;
    {
        const bool branch_taken_0x2aa960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa960) {
            ctx->pc = 0x2AA970u;
            goto label_2aa970;
        }
    }
    ctx->pc = 0x2AA968u;
label_2aa968:
    // 0x2aa968: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2AA968u;
    {
        const bool branch_taken_0x2aa968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa968) {
            ctx->pc = 0x2AA970u;
            goto label_2aa970;
        }
    }
    ctx->pc = 0x2AA970u;
label_2aa970:
    // 0x2aa970: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AA978u;
}
