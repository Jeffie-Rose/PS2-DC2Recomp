#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__8CMdsInfoFv
// Address: 0x169880 - 0x1698bc
void ps2___ct__8CMdsInfoFv_0x169880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__8CMdsInfoFv_0x169880");
#endif

    switch (ctx->pc) {
        case 0x169880u: goto label_169880;
        case 0x169884u: goto label_169884;
        case 0x169888u: goto label_169888;
        case 0x16988cu: goto label_16988c;
        case 0x169890u: goto label_169890;
        case 0x169894u: goto label_169894;
        case 0x169898u: goto label_169898;
        case 0x16989cu: goto label_16989c;
        case 0x1698a0u: goto label_1698a0;
        case 0x1698a4u: goto label_1698a4;
        case 0x1698a8u: goto label_1698a8;
        case 0x1698acu: goto label_1698ac;
        case 0x1698b0u: goto label_1698b0;
        case 0x1698b4u: goto label_1698b4;
        case 0x1698b8u: goto label_1698b8;
        default: break;
    }

    ctx->pc = 0x169880u;

label_169880:
    // 0x169880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_169884:
    // 0x169884: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x169884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_169888:
    // 0x169888: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x169888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16988c:
    // 0x16988c: 0x24425558  addiu       $v0, $v0, 0x5558
    ctx->pc = 0x16988cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21848));
label_169890:
    // 0x169890: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x169890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_169894:
    // 0x169894: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x169894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
label_169898:
    // 0x169898: 0x8c990018  lw          $t9, 0x18($a0)
    ctx->pc = 0x169898u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_16989c:
    // 0x16989c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x16989cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1698a0:
    // 0x1698a0: 0x320f809  jalr        $t9
label_1698a4:
    if (ctx->pc == 0x1698A4u) {
        ctx->pc = 0x1698A4u;
            // 0x1698a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1698A8u;
        goto label_1698a8;
    }
    ctx->pc = 0x1698A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1698A8u);
        ctx->pc = 0x1698A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1698A0u;
            // 0x1698a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1698A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1698A8u; }
            if (ctx->pc != 0x1698A8u) { return; }
        }
        }
    }
    ctx->pc = 0x1698A8u;
label_1698a8:
    // 0x1698a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1698a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1698ac:
    // 0x1698ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1698acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1698b0:
    // 0x1698b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1698b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1698b4:
    // 0x1698b4: 0x3e00008  jr          $ra
label_1698b8:
    if (ctx->pc == 0x1698B8u) {
        ctx->pc = 0x1698B8u;
            // 0x1698b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1698BCu;
        goto label_fallthrough_0x1698b4;
    }
    ctx->pc = 0x1698B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1698B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1698B4u;
            // 0x1698b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1698b4:
    ctx->pc = 0x1698BCu;
}
