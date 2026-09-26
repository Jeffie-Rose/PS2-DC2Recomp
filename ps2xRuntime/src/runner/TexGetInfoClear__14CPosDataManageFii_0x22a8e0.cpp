#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TexGetInfoClear__14CPosDataManageFii
// Address: 0x22a8e0 - 0x22a95c
void TexGetInfoClear__14CPosDataManageFii_0x22a8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TexGetInfoClear__14CPosDataManageFii_0x22a8e0");
#endif

    switch (ctx->pc) {
        case 0x22a920u: goto label_22a920;
        case 0x22a92cu: goto label_22a92c;
        default: break;
    }

    ctx->pc = 0x22a8e0u;

    // 0x22a8e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22a8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22a8e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22a8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x22a8e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22a8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22a8ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22a8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22a8f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22a8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22a8f4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x22a8f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a8f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22a8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22a8fc: 0x94830014  lhu         $v1, 0x14($a0)
    ctx->pc = 0x22a8fcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x22a900: 0x72082a  slt         $at, $v1, $s2
    ctx->pc = 0x22a900u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x22a904: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x22A904u;
    {
        const bool branch_taken_0x22a904 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A904u;
            // 0x22a908: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a904) {
            ctx->pc = 0x22A910u;
            goto label_22a910;
        }
    }
    ctx->pc = 0x22A90Cu;
    // 0x22a90c: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x22a90cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_22a910:
    // 0x22a910: 0xb2082a  slt         $at, $a1, $s2
    ctx->pc = 0x22a910u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x22a914: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x22A914u;
    {
        const bool branch_taken_0x22a914 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A914u;
            // 0x22a918: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a914) {
            ctx->pc = 0x22A940u;
            goto label_22a940;
        }
    }
    ctx->pc = 0x22A91Cu;
    // 0x22a91c: 0x58940  sll         $s1, $a1, 5
    ctx->pc = 0x22a91cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_22a920:
    // 0x22a920: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x22a920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x22a924: 0xc0895f0  jal         func_2257C0
    ctx->pc = 0x22A924u;
    SET_GPR_U32(ctx, 31, 0x22A92Cu);
    ctx->pc = 0x22A928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A924u;
            // 0x22a928: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2257C0u;
    if (runtime->hasFunction(0x2257C0u)) {
        auto targetFn = runtime->lookupFunction(0x2257C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A92Cu; }
        if (ctx->pc != 0x22A92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MENU_BASETEXINFO_Init__FP16MENU_BASETEXINFO_0x2257c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A92Cu; }
        if (ctx->pc != 0x22A92Cu) { return; }
    }
    ctx->pc = 0x22A92Cu;
label_22a92c:
    // 0x22a92c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22a92cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x22a930: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x22a930u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x22a934: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x22a934u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x22a938: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x22A938u;
    {
        const bool branch_taken_0x22a938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a938) {
            ctx->pc = 0x22A920u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22a920;
        }
    }
    ctx->pc = 0x22A940u;
label_22a940:
    // 0x22a940: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22a940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22a944: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22a944u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22a948: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22a948u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a94c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22a94cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a950: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22a950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a954: 0x3e00008  jr          $ra
    ctx->pc = 0x22A954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A954u;
            // 0x22a958: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22A95Cu;
}
