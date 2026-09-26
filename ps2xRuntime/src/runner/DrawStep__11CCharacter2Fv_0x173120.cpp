#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawStep__11CCharacter2Fv
// Address: 0x173120 - 0x173164
void DrawStep__11CCharacter2Fv_0x173120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawStep__11CCharacter2Fv_0x173120");
#endif

    switch (ctx->pc) {
        case 0x173120u: goto label_173120;
        case 0x173124u: goto label_173124;
        case 0x173128u: goto label_173128;
        case 0x17312cu: goto label_17312c;
        case 0x173130u: goto label_173130;
        case 0x173134u: goto label_173134;
        case 0x173138u: goto label_173138;
        case 0x17313cu: goto label_17313c;
        case 0x173140u: goto label_173140;
        case 0x173144u: goto label_173144;
        case 0x173148u: goto label_173148;
        case 0x17314cu: goto label_17314c;
        case 0x173150u: goto label_173150;
        case 0x173154u: goto label_173154;
        case 0x173158u: goto label_173158;
        case 0x17315cu: goto label_17315c;
        case 0x173160u: goto label_173160;
        default: break;
    }

    ctx->pc = 0x173120u;

label_173120:
    // 0x173120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x173120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_173124:
    // 0x173124: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x173124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_173128:
    // 0x173128: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x173128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17312c:
    // 0x17312c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17312cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_173130:
    // 0x173130: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x173130u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_173134:
    // 0x173134: 0x320f809  jalr        $t9
label_173138:
    if (ctx->pc == 0x173138u) {
        ctx->pc = 0x173138u;
            // 0x173138: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17313Cu;
        goto label_17313c;
    }
    ctx->pc = 0x173134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17313Cu);
        ctx->pc = 0x173138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173134u;
            // 0x173138: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17313Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17313Cu; }
            if (ctx->pc != 0x17313Cu) { return; }
        }
        }
    }
    ctx->pc = 0x17313Cu;
label_17313c:
    // 0x17313c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x17313cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_173140:
    // 0x173140: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x173140u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_173144:
    // 0x173144: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x173144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_173148:
    // 0x173148: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x173148u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_17314c:
    // 0x17314c: 0x320f809  jalr        $t9
label_173150:
    if (ctx->pc == 0x173150u) {
        ctx->pc = 0x173150u;
            // 0x173150: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->pc = 0x173154u;
        goto label_173154;
    }
    ctx->pc = 0x17314Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x173154u);
        ctx->pc = 0x173150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17314Cu;
            // 0x173150: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x173154u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x173154u; }
            if (ctx->pc != 0x173154u) { return; }
        }
        }
    }
    ctx->pc = 0x173154u;
label_173154:
    // 0x173154: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x173154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_173158:
    // 0x173158: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x173158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17315c:
    // 0x17315c: 0x3e00008  jr          $ra
label_173160:
    if (ctx->pc == 0x173160u) {
        ctx->pc = 0x173160u;
            // 0x173160: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x173164u;
        goto label_fallthrough_0x17315c;
    }
    ctx->pc = 0x17315Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17315Cu;
            // 0x173160: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x17315c:
    ctx->pc = 0x173164u;
}
