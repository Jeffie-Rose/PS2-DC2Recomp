#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetVillagerModelName__FiPc
// Address: 0x3197d0 - 0x31981c
void GetVillagerModelName__FiPc_0x3197d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetVillagerModelName__FiPc_0x3197d0");
#endif

    switch (ctx->pc) {
        case 0x3197e4u: goto label_3197e4;
        case 0x319808u: goto label_319808;
        default: break;
    }

    ctx->pc = 0x3197d0u;

    // 0x3197d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3197d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3197d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3197d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3197d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3197d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3197dc: 0xc0c65c4  jal         func_319710
    ctx->pc = 0x3197DCu;
    SET_GPR_U32(ctx, 31, 0x3197E4u);
    ctx->pc = 0x3197E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3197DCu;
            // 0x3197e0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x319710u;
    if (runtime->hasFunction(0x319710u)) {
        auto targetFn = runtime->lookupFunction(0x319710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3197E4u; }
        if (ctx->pc != 0x3197E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetVillagerInfo__Fi_0x319710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3197E4u; }
        if (ctx->pc != 0x3197E4u) { return; }
    }
    ctx->pc = 0x3197E4u;
label_3197e4:
    // 0x3197e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3197E4u;
    {
        const bool branch_taken_0x3197e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3197E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3197E4u;
            // 0x3197e8: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3197e4) {
            ctx->pc = 0x3197F4u;
            goto label_3197f4;
        }
    }
    ctx->pc = 0x3197ECu;
    // 0x3197ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3197ECu;
    {
        const bool branch_taken_0x3197ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3197F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3197ECu;
            // 0x3197f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3197ec) {
            ctx->pc = 0x31980Cu;
            goto label_31980c;
        }
    }
    ctx->pc = 0x3197F4u;
label_3197f4:
    // 0x3197f4: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x3197f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3197f8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x3197f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x3197fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3197fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319800: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x319800u;
    SET_GPR_U32(ctx, 31, 0x319808u);
    ctx->pc = 0x319804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319800u;
            // 0x319804: 0x24a529a0  addiu       $a1, $a1, 0x29A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319808u; }
        if (ctx->pc != 0x319808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319808u; }
        if (ctx->pc != 0x319808u) { return; }
    }
    ctx->pc = 0x319808u;
label_319808:
    // 0x319808: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x319808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31980c:
    // 0x31980c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31980cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x319810: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x319810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x319814: 0x3e00008  jr          $ra
    ctx->pc = 0x319814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319814u;
            // 0x319818: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31981Cu;
}
