#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawEffectScript__11CMonsterManFv
// Address: 0x1db130 - 0x1db198
void DrawEffectScript__11CMonsterManFv_0x1db130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawEffectScript__11CMonsterManFv_0x1db130");
#endif

    switch (ctx->pc) {
        case 0x1db130u: goto label_1db130;
        case 0x1db134u: goto label_1db134;
        case 0x1db138u: goto label_1db138;
        case 0x1db13cu: goto label_1db13c;
        case 0x1db140u: goto label_1db140;
        case 0x1db144u: goto label_1db144;
        case 0x1db148u: goto label_1db148;
        case 0x1db14cu: goto label_1db14c;
        case 0x1db150u: goto label_1db150;
        case 0x1db154u: goto label_1db154;
        case 0x1db158u: goto label_1db158;
        case 0x1db15cu: goto label_1db15c;
        case 0x1db160u: goto label_1db160;
        case 0x1db164u: goto label_1db164;
        case 0x1db168u: goto label_1db168;
        case 0x1db16cu: goto label_1db16c;
        case 0x1db170u: goto label_1db170;
        case 0x1db174u: goto label_1db174;
        case 0x1db178u: goto label_1db178;
        case 0x1db17cu: goto label_1db17c;
        case 0x1db180u: goto label_1db180;
        case 0x1db184u: goto label_1db184;
        case 0x1db188u: goto label_1db188;
        case 0x1db18cu: goto label_1db18c;
        case 0x1db190u: goto label_1db190;
        case 0x1db194u: goto label_1db194;
        default: break;
    }

    ctx->pc = 0x1db130u;

label_1db130:
    // 0x1db130: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1db130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1db134:
    // 0x1db134: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1db134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1db138:
    // 0x1db138: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1db138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1db13c:
    // 0x1db13c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1db13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1db140:
    // 0x1db140: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1db140u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1db144:
    // 0x1db144: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1db144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1db148:
    // 0x1db148: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1db148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db14c:
    // 0x1db14c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1db14cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db150:
    // 0x1db150: 0x2511821  addu        $v1, $s2, $s1
    ctx->pc = 0x1db150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_1db154:
    // 0x1db154: 0x8c640484  lw          $a0, 0x484($v1)
    ctx->pc = 0x1db154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1156)));
label_1db158:
    // 0x1db158: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1db15c:
    if (ctx->pc == 0x1DB15Cu) {
        ctx->pc = 0x1DB160u;
        goto label_1db160;
    }
    ctx->pc = 0x1DB158u;
    {
        const bool branch_taken_0x1db158 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db158) {
            ctx->pc = 0x1DB170u;
            goto label_1db170;
        }
    }
    ctx->pc = 0x1DB160u;
label_1db160:
    // 0x1db160: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1db160u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1db164:
    // 0x1db164: 0x8f3900f4  lw          $t9, 0xF4($t9)
    ctx->pc = 0x1db164u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 244)));
label_1db168:
    // 0x1db168: 0x320f809  jalr        $t9
label_1db16c:
    if (ctx->pc == 0x1DB16Cu) {
        ctx->pc = 0x1DB170u;
        goto label_1db170;
    }
    ctx->pc = 0x1DB168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DB170u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DB170u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DB170u; }
            if (ctx->pc != 0x1DB170u) { return; }
        }
        }
    }
    ctx->pc = 0x1DB170u;
label_1db170:
    // 0x1db170: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1db170u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1db174:
    // 0x1db174: 0x2a030018  slti        $v1, $s0, 0x18
    ctx->pc = 0x1db174u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
label_1db178:
    // 0x1db178: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_1db17c:
    if (ctx->pc == 0x1DB17Cu) {
        ctx->pc = 0x1DB17Cu;
            // 0x1db17c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x1DB180u;
        goto label_1db180;
    }
    ctx->pc = 0x1DB178u;
    {
        const bool branch_taken_0x1db178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB178u;
            // 0x1db17c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db178) {
            ctx->pc = 0x1DB150u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1db150;
        }
    }
    ctx->pc = 0x1DB180u;
label_1db180:
    // 0x1db180: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1db180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1db184:
    // 0x1db184: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1db184u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1db188:
    // 0x1db188: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1db188u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1db18c:
    // 0x1db18c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1db18cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1db190:
    // 0x1db190: 0x3e00008  jr          $ra
label_1db194:
    if (ctx->pc == 0x1DB194u) {
        ctx->pc = 0x1DB194u;
            // 0x1db194: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1DB198u;
        goto label_fallthrough_0x1db190;
    }
    ctx->pc = 0x1DB190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB190u;
            // 0x1db194: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1db190:
    ctx->pc = 0x1DB198u;
}
