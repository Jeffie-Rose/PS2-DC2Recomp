#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteGroup__15mgCTextureAnimeFi
// Address: 0x13d730 - 0x13d7a0
void DeleteGroup__15mgCTextureAnimeFi_0x13d730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteGroup__15mgCTextureAnimeFi_0x13d730");
#endif

    switch (ctx->pc) {
        case 0x13d770u: goto label_13d770;
        default: break;
    }

    ctx->pc = 0x13d730u;

    // 0x13d730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13d730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13d734: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13d734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13d738: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13d738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13d73c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13d73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13d740: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13d740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d744: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13d744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d748: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13D748u;
    {
        const bool branch_taken_0x13d748 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x13d748) {
            ctx->pc = 0x13D760u;
            goto label_13d760;
        }
    }
    ctx->pc = 0x13D750u;
    // 0x13d750: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13d750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13d754: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x13d754u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13d758: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D758u;
    {
        const bool branch_taken_0x13d758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d758) {
            ctx->pc = 0x13D768u;
            goto label_13d768;
        }
    }
    ctx->pc = 0x13D760u;
label_13d760:
    // 0x13d760: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13D760u;
    {
        const bool branch_taken_0x13d760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d760) {
            ctx->pc = 0x13D788u;
            goto label_13d788;
        }
    }
    ctx->pc = 0x13D768u;
label_13d768:
    // 0x13d768: 0xc04f610  jal         func_13D840
    ctx->pc = 0x13D768u;
    SET_GPR_U32(ctx, 31, 0x13D770u);
    ctx->pc = 0x13D840u;
    if (runtime->hasFunction(0x13D840u)) {
        auto targetFn = runtime->lookupFunction(0x13D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D770u; }
        if (ctx->pc != 0x13D770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Disable__15mgCTextureAnimeFi_0x13d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D770u; }
        if (ctx->pc != 0x13D770u) { return; }
    }
    ctx->pc = 0x13D770u;
label_13d770:
    // 0x13d770: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x13d770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x13d774: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x13d774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x13d778: 0xac600064  sw          $zero, 0x64($v1)
    ctx->pc = 0x13d778u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 0));
    // 0x13d77c: 0xac6000c4  sw          $zero, 0xC4($v1)
    ctx->pc = 0x13d77cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 196), GPR_U32(ctx, 0));
    // 0x13d780: 0xac600124  sw          $zero, 0x124($v1)
    ctx->pc = 0x13d780u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 292), GPR_U32(ctx, 0));
    // 0x13d784: 0xac600184  sw          $zero, 0x184($v1)
    ctx->pc = 0x13d784u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 388), GPR_U32(ctx, 0));
label_13d788:
    // 0x13d788: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13d788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d78c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13d78cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d790: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13d790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d794: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13d794u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13d798: 0x3e00008  jr          $ra
    ctx->pc = 0x13D798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13D7A0u;
}
