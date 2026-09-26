#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetAttackType__13CGameDataUsedFv
// Address: 0x199340 - 0x1993a4
void GetAttackType__13CGameDataUsedFv_0x199340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetAttackType__13CGameDataUsedFv_0x199340");
#endif

    switch (ctx->pc) {
        case 0x199364u: goto label_199364;
        case 0x19938cu: goto label_19938c;
        default: break;
    }

    ctx->pc = 0x199340u;

    // 0x199340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x199340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x199344: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x199344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x199348: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x199348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19934c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19934cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x199350: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x199350u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x199354: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x199354u;
    {
        const bool branch_taken_0x199354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x199358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199354u;
            // 0x199358: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199354) {
            ctx->pc = 0x199374u;
            goto label_199374;
        }
    }
    ctx->pc = 0x19935Cu;
    // 0x19935c: 0xc065710  jal         func_195C40
    ctx->pc = 0x19935Cu;
    SET_GPR_U32(ctx, 31, 0x199364u);
    ctx->pc = 0x199360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19935Cu;
            // 0x199360: 0x86040002  lh          $a0, 0x2($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C40u;
    if (runtime->hasFunction(0x195C40u)) {
        auto targetFn = runtime->lookupFunction(0x195C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199364u; }
        if (ctx->pc != 0x199364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWeaponInfoData__Fi_0x195c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199364u; }
        if (ctx->pc != 0x199364u) { return; }
    }
    ctx->pc = 0x199364u;
label_199364:
    // 0x199364: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x199364u;
    {
        const bool branch_taken_0x199364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x199364) {
            ctx->pc = 0x199374u;
            goto label_199374;
        }
    }
    ctx->pc = 0x19936Cu;
    // 0x19936c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19936Cu;
    {
        const bool branch_taken_0x19936c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19936Cu;
            // 0x199370: 0x80420048  lb          $v0, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19936c) {
            ctx->pc = 0x199394u;
            goto label_199394;
        }
    }
    ctx->pc = 0x199374u;
label_199374:
    // 0x199374: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x199374u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x199378: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x199378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19937c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19937Cu;
    {
        const bool branch_taken_0x19937c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x199380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19937Cu;
            // 0x199380: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19937c) {
            ctx->pc = 0x199394u;
            goto label_199394;
        }
    }
    ctx->pc = 0x199384u;
    // 0x199384: 0xc0660e4  jal         func_198390
    ctx->pc = 0x199384u;
    SET_GPR_U32(ctx, 31, 0x19938Cu);
    ctx->pc = 0x199388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199384u;
            // 0x199388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198390u;
    if (runtime->hasFunction(0x198390u)) {
        auto targetFn = runtime->lookupFunction(0x198390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19938Cu; }
        if (ctx->pc != 0x19938Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRoboInfoType__13CGameDataUsedFv_0x198390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19938Cu; }
        if (ctx->pc != 0x19938Cu) { return; }
    }
    ctx->pc = 0x19938Cu;
label_19938c:
    // 0x19938c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x19938Cu;
    {
        const bool branch_taken_0x19938c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19938c) {
            ctx->pc = 0x199394u;
            goto label_199394;
        }
    }
    ctx->pc = 0x199394u;
label_199394:
    // 0x199394: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x199394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199398: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x199398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19939c: 0x3e00008  jr          $ra
    ctx->pc = 0x19939Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1993A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19939Cu;
            // 0x1993a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1993A4u;
}
