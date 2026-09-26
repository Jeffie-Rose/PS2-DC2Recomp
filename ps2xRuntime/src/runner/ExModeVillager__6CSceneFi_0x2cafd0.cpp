#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ExModeVillager__6CSceneFi
// Address: 0x2cafd0 - 0x2cb00c
void ExModeVillager__6CSceneFi_0x2cafd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExModeVillager__6CSceneFi_0x2cafd0");
#endif

    switch (ctx->pc) {
        case 0x2cafe8u: goto label_2cafe8;
        case 0x2caffcu: goto label_2caffc;
        default: break;
    }

    ctx->pc = 0x2cafd0u;

    // 0x2cafd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cafd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cafd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cafd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cafd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cafd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cafdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cafdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cafe0: 0xc0b34e0  jal         func_2CD380
    ctx->pc = 0x2CAFE0u;
    SET_GPR_U32(ctx, 31, 0x2CAFE8u);
    ctx->pc = 0x2CAFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAFE0u;
            // 0x2cafe4: 0x26043050  addiu       $a0, $s0, 0x3050 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD380u;
    if (runtime->hasFunction(0x2CD380u)) {
        auto targetFn = runtime->lookupFunction(0x2CD380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAFE8u; }
        if (ctx->pc != 0x2CAFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchDataIDatCharaID__13CVillagerMngrFi_0x2cd380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAFE8u; }
        if (ctx->pc != 0x2CAFE8u) { return; }
    }
    ctx->pc = 0x2CAFE8u;
label_2cafe8:
    // 0x2cafe8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cafe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cafec: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CAFECu;
    {
        const bool branch_taken_0x2cafec = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2CAFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAFECu;
            // 0x2caff0: 0x26043050  addiu       $a0, $s0, 0x3050 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cafec) {
            ctx->pc = 0x2CAFFCu;
            goto label_2caffc;
        }
    }
    ctx->pc = 0x2CAFF4u;
    // 0x2caff4: 0xc0b34d0  jal         func_2CD340
    ctx->pc = 0x2CAFF4u;
    SET_GPR_U32(ctx, 31, 0x2CAFFCu);
    ctx->pc = 0x2CD340u;
    if (runtime->hasFunction(0x2CD340u)) {
        auto targetFn = runtime->lookupFunction(0x2CD340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAFFCu; }
        if (ctx->pc != 0x2CAFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExMode__13CVillagerMngrFi_0x2cd340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAFFCu; }
        if (ctx->pc != 0x2CAFFCu) { return; }
    }
    ctx->pc = 0x2CAFFCu;
label_2caffc:
    // 0x2caffc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2caffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb000: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cb000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb004: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB004u;
            // 0x2cb008: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CB00Cu;
}
