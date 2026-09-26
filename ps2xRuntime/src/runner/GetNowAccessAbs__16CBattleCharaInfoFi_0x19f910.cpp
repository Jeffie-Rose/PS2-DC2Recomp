#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNowAccessAbs__16CBattleCharaInfoFi
// Address: 0x19f910 - 0x19f984
void GetNowAccessAbs__16CBattleCharaInfoFi_0x19f910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNowAccessAbs__16CBattleCharaInfoFi_0x19f910");
#endif

    ctx->pc = 0x19f910u;

    // 0x19f910: 0x84860006  lh          $a2, 0x6($a0)
    ctx->pc = 0x19f910u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x19f914: 0x14c0000f  bnez        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x19F914u;
    {
        const bool branch_taken_0x19f914 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F914u;
            // 0x19f918: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f914) {
            ctx->pc = 0x19F954u;
            goto label_19f954;
        }
    }
    ctx->pc = 0x19F91Cu;
    // 0x19f91c: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x19f91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x19f920: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F920u;
    {
        const bool branch_taken_0x19f920 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f920) {
            ctx->pc = 0x19F930u;
            goto label_19f930;
        }
    }
    ctx->pc = 0x19F928u;
    // 0x19f928: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x19F928u;
    {
        const bool branch_taken_0x19f928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f928) {
            ctx->pc = 0x19F97Cu;
            goto label_19f97c;
        }
    }
    ctx->pc = 0x19F930u;
label_19f930:
    // 0x19f930: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x19f930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x19f934: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x19f934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x19f938: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19f938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19f93c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19f93cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19f940: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19f940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19f944: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x19f944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19f948: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x19f948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x19f94c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x19F94Cu;
    {
        const bool branch_taken_0x19f94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F94Cu;
            // 0x19f950: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f94c) {
            ctx->pc = 0x19F97Cu;
            goto label_19f97c;
        }
    }
    ctx->pc = 0x19F954u;
label_19f954:
    // 0x19f954: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19f954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f958: 0x14c30004  bne         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F958u;
    {
        const bool branch_taken_0x19f958 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x19F95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F958u;
            // 0x19f95c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f958) {
            ctx->pc = 0x19F96Cu;
            goto label_19f96c;
        }
    }
    ctx->pc = 0x19F960u;
    // 0x19f960: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x19f960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x19f964: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19F964u;
    {
        const bool branch_taken_0x19f964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F964u;
            // 0x19f968: 0x24420028  addiu       $v0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f964) {
            ctx->pc = 0x19F97Cu;
            goto label_19f97c;
        }
    }
    ctx->pc = 0x19F96Cu;
label_19f96c:
    // 0x19f96c: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F96Cu;
    {
        const bool branch_taken_0x19f96c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x19f96c) {
            ctx->pc = 0x19F97Cu;
            goto label_19f97c;
        }
    }
    ctx->pc = 0x19F974u;
    // 0x19f974: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x19f974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x19f978: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x19f978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_19f97c:
    // 0x19f97c: 0x3e00008  jr          $ra
    ctx->pc = 0x19F97Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F984u;
}
