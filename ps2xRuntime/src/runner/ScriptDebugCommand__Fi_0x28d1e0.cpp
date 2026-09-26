#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ScriptDebugCommand__Fi
// Address: 0x28d1e0 - 0x28d23c
void ScriptDebugCommand__Fi_0x28d1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ScriptDebugCommand__Fi_0x28d1e0");
#endif

    switch (ctx->pc) {
        case 0x28d1f8u: goto label_28d1f8;
        case 0x28d220u: goto label_28d220;
        case 0x28d228u: goto label_28d228;
        default: break;
    }

    ctx->pc = 0x28d1e0u;

    // 0x28d1e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28d1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28d1e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28d1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28d1e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28d1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28d1ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28d1ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d1f0: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x28D1F0u;
    SET_GPR_U32(ctx, 31, 0x28D1F8u);
    ctx->pc = 0x28D1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D1F0u;
            // 0x28d1f4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D1F8u; }
        if (ctx->pc != 0x28D1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D1F8u; }
        if (ctx->pc != 0x28D1F8u) { return; }
    }
    ctx->pc = 0x28D1F8u;
label_28d1f8:
    // 0x28d1f8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D1F8u;
    {
        const bool branch_taken_0x28d1f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D1F8u;
            // 0x28d1fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d1f8) {
            ctx->pc = 0x28D208u;
            goto label_28d208;
        }
    }
    ctx->pc = 0x28D200u;
    // 0x28d200: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x28D200u;
    {
        const bool branch_taken_0x28d200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D200u;
            // 0x28d204: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d200) {
            ctx->pc = 0x28D22Cu;
            goto label_28d22c;
        }
    }
    ctx->pc = 0x28D208u;
label_28d208:
    // 0x28d208: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x28d208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x28d20c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x28d20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x28d210: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x28d210u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28d214: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x28d214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x28d218: 0xc06802c  jal         func_1A00B0
    ctx->pc = 0x28D218u;
    SET_GPR_U32(ctx, 31, 0x28D220u);
    ctx->pc = 0x28D21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D218u;
            // 0x28d21c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A00B0u;
    if (runtime->hasFunction(0x1A00B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A00B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D220u; }
        if (ctx->pc != 0x28D220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddHp_Point__16CBattleCharaInfoFff_0x1a00b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D220u; }
        if (ctx->pc != 0x28D220u) { return; }
    }
    ctx->pc = 0x28D220u;
label_28d220:
    // 0x28d220: 0xc068154  jal         func_1A0550
    ctx->pc = 0x28D220u;
    SET_GPR_U32(ctx, 31, 0x28D228u);
    ctx->pc = 0x28D224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D220u;
            // 0x28d224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0550u;
    if (runtime->hasFunction(0x1A0550u)) {
        auto targetFn = runtime->lookupFunction(0x1A0550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D228u; }
        if (ctx->pc != 0x28D228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ForceSet__16CBattleCharaInfoFv_0x1a0550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D228u; }
        if (ctx->pc != 0x28D228u) { return; }
    }
    ctx->pc = 0x28D228u;
label_28d228:
    // 0x28d228: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28d228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_28d22c:
    // 0x28d22c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28d22cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28d230: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28d230u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d234: 0x3e00008  jr          $ra
    ctx->pc = 0x28D234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D234u;
            // 0x28d238: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28D23Cu;
}
