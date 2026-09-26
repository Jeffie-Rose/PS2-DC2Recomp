#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPhotoName__FP17USER_PICTURE_INFO
// Address: 0x1ff920 - 0x1ffa04
void GetPhotoName__FP17USER_PICTURE_INFO_0x1ff920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPhotoName__FP17USER_PICTURE_INFO_0x1ff920");
#endif

    switch (ctx->pc) {
        case 0x1ff968u: goto label_1ff968;
        case 0x1ff9b0u: goto label_1ff9b0;
        case 0x1ff9d0u: goto label_1ff9d0;
        case 0x1ff9f0u: goto label_1ff9f0;
        default: break;
    }

    ctx->pc = 0x1ff920u;

    // 0x1ff920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ff920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ff924: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF924u;
    {
        const bool branch_taken_0x1ff924 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF924u;
            // 0x1ff928: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff924) {
            ctx->pc = 0x1FF934u;
            goto label_1ff934;
        }
    }
    ctx->pc = 0x1FF92Cu;
    // 0x1ff92c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1FF92Cu;
    {
        const bool branch_taken_0x1ff92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF92Cu;
            // 0x1ff930: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff92c) {
            ctx->pc = 0x1FF9F8u;
            goto label_1ff9f8;
        }
    }
    ctx->pc = 0x1FF934u;
label_1ff934:
    // 0x1ff934: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1ff934u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ff938: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF938u;
    {
        const bool branch_taken_0x1ff938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF938u;
            // 0x1ff93c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff938) {
            ctx->pc = 0x1FF948u;
            goto label_1ff948;
        }
    }
    ctx->pc = 0x1FF940u;
    // 0x1ff940: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1FF940u;
    {
        const bool branch_taken_0x1ff940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF940u;
            // 0x1ff944: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff940) {
            ctx->pc = 0x1FF9FCu;
            goto label_1ff9fc;
        }
    }
    ctx->pc = 0x1FF948u;
label_1ff948:
    // 0x1ff948: 0x8487000a  lh          $a3, 0xA($a0)
    ctx->pc = 0x1ff948u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x1ff94c: 0x18e00011  blez        $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FF94Cu;
    {
        const bool branch_taken_0x1ff94c = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x1ff94c) {
            ctx->pc = 0x1FF994u;
            goto label_1ff994;
        }
    }
    ctx->pc = 0x1FF954u;
    // 0x1ff954: 0x8f8890f0  lw          $t0, -0x6F10($gp)
    ctx->pc = 0x1ff954u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
    // 0x1ff958: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ff958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff95c: 0x878390f4  lh          $v1, -0x6F0C($gp)
    ctx->pc = 0x1ff95cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938868)));
    // 0x1ff960: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1FF960u;
    {
        const bool branch_taken_0x1ff960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF960u;
            // 0x1ff964: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff960) {
            ctx->pc = 0x1FF988u;
            goto label_1ff988;
        }
    }
    ctx->pc = 0x1FF968u;
label_1ff968:
    // 0x1ff968: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1ff968u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ff96c: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF96Cu;
    {
        const bool branch_taken_0x1ff96c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FF970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF96Cu;
            // 0x1ff970: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff96c) {
            ctx->pc = 0x1FF980u;
            goto label_1ff980;
        }
    }
    ctx->pc = 0x1FF974u;
    // 0x1ff974: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1ff974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1ff978: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1FF978u;
    {
        const bool branch_taken_0x1ff978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF978u;
            // 0x1ff97c: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff978) {
            ctx->pc = 0x1FF9F8u;
            goto label_1ff9f8;
        }
    }
    ctx->pc = 0x1FF980u;
label_1ff980:
    // 0x1ff980: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1ff980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1ff984: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ff984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1ff988:
    // 0x1ff988: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1ff988u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ff98c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1FF98Cu;
    {
        const bool branch_taken_0x1ff98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF98Cu;
            // 0x1ff990: 0x1061021  addu        $v0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff98c) {
            ctx->pc = 0x1FF968u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ff968;
        }
    }
    ctx->pc = 0x1FF994u;
label_1ff994:
    // 0x1ff994: 0x0  nop
    ctx->pc = 0x1ff994u;
    // NOP
    // 0x1ff998: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1ff998u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ff99c: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x1ff99cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1ff9a0: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF9A0u;
    {
        const bool branch_taken_0x1ff9a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff9a0) {
            ctx->pc = 0x1FF9B8u;
            goto label_1ff9b8;
        }
    }
    ctx->pc = 0x1FF9A8u;
    // 0x1ff9a8: 0xc0aacf4  jal         func_2AB3D0
    ctx->pc = 0x1FF9A8u;
    SET_GPR_U32(ctx, 31, 0x1FF9B0u);
    ctx->pc = 0x1FF9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF9A8u;
            // 0x1ff9ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB3D0u;
    if (runtime->hasFunction(0x2AB3D0u)) {
        auto targetFn = runtime->lookupFunction(0x2AB3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF9B0u; }
        if (ctx->pc != 0x1FF9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNPCName__Fi_0x2ab3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF9B0u; }
        if (ctx->pc != 0x1FF9B0u) { return; }
    }
    ctx->pc = 0x1FF9B0u;
label_1ff9b0:
    // 0x1ff9b0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1FF9B0u;
    {
        const bool branch_taken_0x1ff9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff9b0) {
            ctx->pc = 0x1FF9F8u;
            goto label_1ff9f8;
        }
    }
    ctx->pc = 0x1FF9B8u;
label_1ff9b8:
    // 0x1ff9b8: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x1ff9b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1ff9bc: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x1ff9bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1ff9c0: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF9C0u;
    {
        const bool branch_taken_0x1ff9c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff9c0) {
            ctx->pc = 0x1FF9D8u;
            goto label_1ff9d8;
        }
    }
    ctx->pc = 0x1FF9C8u;
    // 0x1ff9c8: 0xc0ad6c4  jal         func_2B5B10
    ctx->pc = 0x1FF9C8u;
    SET_GPR_U32(ctx, 31, 0x1FF9D0u);
    ctx->pc = 0x1FF9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF9C8u;
            // 0x1ff9cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF9D0u; }
        if (ctx->pc != 0x1FF9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterName__Fi_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF9D0u; }
        if (ctx->pc != 0x1FF9D0u) { return; }
    }
    ctx->pc = 0x1FF9D0u;
label_1ff9d0:
    // 0x1ff9d0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1FF9D0u;
    {
        const bool branch_taken_0x1ff9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff9d0) {
            ctx->pc = 0x1FF9F8u;
            goto label_1ff9f8;
        }
    }
    ctx->pc = 0x1FF9D8u;
label_1ff9d8:
    // 0x1ff9d8: 0x84840002  lh          $a0, 0x2($a0)
    ctx->pc = 0x1ff9d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1ff9dc: 0x80082a  slt         $at, $a0, $zero
    ctx->pc = 0x1ff9dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1ff9e0: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF9E0u;
    {
        const bool branch_taken_0x1ff9e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF9E0u;
            // 0x1ff9e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff9e0) {
            ctx->pc = 0x1FF9F8u;
            goto label_1ff9f8;
        }
    }
    ctx->pc = 0x1FF9E8u;
    // 0x1ff9e8: 0xc0b4a20  jal         func_2D2880
    ctx->pc = 0x1FF9E8u;
    SET_GPR_U32(ctx, 31, 0x1FF9F0u);
    ctx->pc = 0x2D2880u;
    if (runtime->hasFunction(0x2D2880u)) {
        auto targetFn = runtime->lookupFunction(0x2D2880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF9F0u; }
        if (ctx->pc != 0x1FF9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapTitle__Fi_0x2d2880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF9F0u; }
        if (ctx->pc != 0x1FF9F0u) { return; }
    }
    ctx->pc = 0x1FF9F0u;
label_1ff9f0:
    // 0x1ff9f0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1FF9F0u;
    {
        const bool branch_taken_0x1ff9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff9f0) {
            ctx->pc = 0x1FF9F8u;
            goto label_1ff9f8;
        }
    }
    ctx->pc = 0x1FF9F8u;
label_1ff9f8:
    // 0x1ff9f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff9f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ff9fc:
    // 0x1ff9fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF9FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF9FCu;
            // 0x1ffa00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FFA04u;
}
