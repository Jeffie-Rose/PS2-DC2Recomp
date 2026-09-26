#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetAquariumFishNum__13CFishAquariumFi
// Address: 0x19a410 - 0x19a484
void GetAquariumFishNum__13CFishAquariumFi_0x19a410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetAquariumFishNum__13CFishAquariumFi_0x19a410");
#endif

    switch (ctx->pc) {
        case 0x19a42cu: goto label_19a42c;
        case 0x19a448u: goto label_19a448;
        default: break;
    }

    ctx->pc = 0x19a410u;

    // 0x19a410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19a410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19a414: 0x27828098  addiu       $v0, $gp, -0x7F68
    ctx->pc = 0x19a414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934680));
    // 0x19a418: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19a418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19a41c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x19a41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x19a420: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19a420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19a424: 0xc066888  jal         func_19A220
    ctx->pc = 0x19A424u;
    SET_GPR_U32(ctx, 31, 0x19A42Cu);
    ctx->pc = 0x19A428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A424u;
            // 0x19a428: 0x80500000  lb          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A220u;
    if (runtime->hasFunction(0x19A220u)) {
        auto targetFn = runtime->lookupFunction(0x19A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A42Cu; }
        if (ctx->pc != 0x19A42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAquariumFishTop__13CFishAquariumFi_0x19a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A42Cu; }
        if (ctx->pc != 0x19A42Cu) { return; }
    }
    ctx->pc = 0x19A42Cu;
label_19a42c:
    // 0x19a42c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19A42Cu;
    {
        const bool branch_taken_0x19a42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A42Cu;
            // 0x19a430: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a42c) {
            ctx->pc = 0x19A43Cu;
            goto label_19a43c;
        }
    }
    ctx->pc = 0x19A434u;
    // 0x19a434: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x19A434u;
    {
        const bool branch_taken_0x19a434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A434u;
            // 0x19a438: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a434) {
            ctx->pc = 0x19A474u;
            goto label_19a474;
        }
    }
    ctx->pc = 0x19A43Cu;
label_19a43c:
    // 0x19a43c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19a43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a440: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x19A440u;
    {
        const bool branch_taken_0x19a440 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A440u;
            // 0x19a444: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a440) {
            ctx->pc = 0x19A470u;
            goto label_19a470;
        }
    }
    ctx->pc = 0x19A448u;
label_19a448:
    // 0x19a448: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x19a448u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x19a44c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x19a44cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19a450: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x19A450u;
    {
        const bool branch_taken_0x19a450 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a450) {
            ctx->pc = 0x19A45Cu;
            goto label_19a45c;
        }
    }
    ctx->pc = 0x19A458u;
    // 0x19a458: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19a458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19a45c:
    // 0x19a45c: 0x0  nop
    ctx->pc = 0x19a45cu;
    // NOP
    // 0x19a460: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19a460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19a464: 0xb0182a  slt         $v1, $a1, $s0
    ctx->pc = 0x19a464u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x19a468: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x19A468u;
    {
        const bool branch_taken_0x19a468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A468u;
            // 0x19a46c: 0x2442006c  addiu       $v0, $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a468) {
            ctx->pc = 0x19A448u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19a448;
        }
    }
    ctx->pc = 0x19A470u;
label_19a470:
    // 0x19a470: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x19a470u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19a474:
    // 0x19a474: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19a474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a478: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19a478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a47c: 0x3e00008  jr          $ra
    ctx->pc = 0x19A47Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A47Cu;
            // 0x19a480: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A484u;
}
