#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetColor__12CSceneObjSeqFPfi
// Address: 0x25d2f0 - 0x25d34c
void SetColor__12CSceneObjSeqFPfi_0x25d2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetColor__12CSceneObjSeqFPfi_0x25d2f0");
#endif

    switch (ctx->pc) {
        case 0x25d310u: goto label_25d310;
        case 0x25d330u: goto label_25d330;
        default: break;
    }

    ctx->pc = 0x25d2f0u;

    // 0x25d2f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25d2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25d2f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25d2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25d2f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25d2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25d2fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25d2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25d300: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25d300u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d304: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x25d304u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d308: 0xc097160  jal         func_25C580
    ctx->pc = 0x25D308u;
    SET_GPR_U32(ctx, 31, 0x25D310u);
    ctx->pc = 0x25D30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D308u;
            // 0x25d30c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C580u;
    if (runtime->hasFunction(0x25C580u)) {
        auto targetFn = runtime->lookupFunction(0x25C580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D310u; }
        if (ctx->pc != 0x25D310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextColSeq__12CSceneObjSeqFv_0x25c580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D310u; }
        if (ctx->pc != 0x25D310u) { return; }
    }
    ctx->pc = 0x25D310u;
label_25d310:
    // 0x25d310: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25d310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d314: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25D314u;
    {
        const bool branch_taken_0x25d314 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d314) {
            ctx->pc = 0x25D334u;
            goto label_25d334;
        }
    }
    ctx->pc = 0x25D31Cu;
    // 0x25d31c: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x25d31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x25d320: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25d320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d324: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x25d324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x25d328: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25D328u;
    SET_GPR_U32(ctx, 31, 0x25D330u);
    ctx->pc = 0x25D32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D328u;
            // 0x25d32c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D330u; }
        if (ctx->pc != 0x25D330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D330u; }
        if (ctx->pc != 0x25D330u) { return; }
    }
    ctx->pc = 0x25D330u;
label_25d330:
    // 0x25d330: 0xae110020  sw          $s1, 0x20($s0)
    ctx->pc = 0x25d330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
label_25d334:
    // 0x25d334: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25d334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25d338: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25d338u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d33c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25d33cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d340: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25d340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d344: 0x3e00008  jr          $ra
    ctx->pc = 0x25D344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D344u;
            // 0x25d348: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25D34Cu;
}
