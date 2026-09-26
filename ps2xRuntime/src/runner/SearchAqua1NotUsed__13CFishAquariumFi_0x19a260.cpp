#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchAqua1NotUsed__13CFishAquariumFi
// Address: 0x19a260 - 0x19a2d0
void SearchAqua1NotUsed__13CFishAquariumFi_0x19a260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchAqua1NotUsed__13CFishAquariumFi_0x19a260");
#endif

    switch (ctx->pc) {
        case 0x19a274u: goto label_19a274;
        case 0x19a294u: goto label_19a294;
        default: break;
    }

    ctx->pc = 0x19a260u;

    // 0x19a260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19a260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19a264: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19a264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19a268: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19a268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19a26c: 0xc066888  jal         func_19A220
    ctx->pc = 0x19A26Cu;
    SET_GPR_U32(ctx, 31, 0x19A274u);
    ctx->pc = 0x19A270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A26Cu;
            // 0x19a270: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A220u;
    if (runtime->hasFunction(0x19A220u)) {
        auto targetFn = runtime->lookupFunction(0x19A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A274u; }
        if (ctx->pc != 0x19A274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAquariumFishTop__13CFishAquariumFi_0x19a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A274u; }
        if (ctx->pc != 0x19A274u) { return; }
    }
    ctx->pc = 0x19A274u;
label_19a274:
    // 0x19a274: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19A274u;
    {
        const bool branch_taken_0x19a274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A274u;
            // 0x19a278: 0x27838098  addiu       $v1, $gp, -0x7F68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a274) {
            ctx->pc = 0x19A284u;
            goto label_19a284;
        }
    }
    ctx->pc = 0x19A27Cu;
    // 0x19a27c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x19A27Cu;
    {
        const bool branch_taken_0x19a27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A27Cu;
            // 0x19a280: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a27c) {
            ctx->pc = 0x19A2C0u;
            goto label_19a2c0;
        }
    }
    ctx->pc = 0x19A284u;
label_19a284:
    // 0x19a284: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19a284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19a288: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x19a288u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19a28c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19A28Cu;
    {
        const bool branch_taken_0x19a28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A28Cu;
            // 0x19a290: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a28c) {
            ctx->pc = 0x19A2B0u;
            goto label_19a2b0;
        }
    }
    ctx->pc = 0x19A294u;
label_19a294:
    // 0x19a294: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x19a294u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x19a298: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19A298u;
    {
        const bool branch_taken_0x19a298 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x19a298) {
            ctx->pc = 0x19A2A8u;
            goto label_19a2a8;
        }
    }
    ctx->pc = 0x19A2A0u;
    // 0x19a2a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19A2A0u;
    {
        const bool branch_taken_0x19a2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A2A0u;
            // 0x19a2a4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a2a0) {
            ctx->pc = 0x19A2C0u;
            goto label_19a2c0;
        }
    }
    ctx->pc = 0x19A2A8u;
label_19a2a8:
    // 0x19a2a8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19a2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19a2ac: 0x2442006c  addiu       $v0, $v0, 0x6C
    ctx->pc = 0x19a2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
label_19a2b0:
    // 0x19a2b0: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x19a2b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x19a2b4: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x19A2B4u;
    {
        const bool branch_taken_0x19a2b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a2b4) {
            ctx->pc = 0x19A294u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19a294;
        }
    }
    ctx->pc = 0x19A2BCu;
    // 0x19a2bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19a2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19a2c0:
    // 0x19a2c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19a2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a2c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19a2c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a2c8: 0x3e00008  jr          $ra
    ctx->pc = 0x19A2C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A2C8u;
            // 0x19a2cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A2D0u;
}
