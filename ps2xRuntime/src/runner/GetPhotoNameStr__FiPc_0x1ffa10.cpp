#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPhotoNameStr__FiPc
// Address: 0x1ffa10 - 0x1ffa60
void GetPhotoNameStr__FiPc_0x1ffa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPhotoNameStr__FiPc_0x1ffa10");
#endif

    switch (ctx->pc) {
        case 0x1ffa34u: goto label_1ffa34;
        case 0x1ffa4cu: goto label_1ffa4c;
        default: break;
    }

    ctx->pc = 0x1ffa10u;

    // 0x1ffa10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ffa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ffa14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ffa14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffa18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ffa18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ffa1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ffa1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ffa20: 0xa7a4002a  sh          $a0, 0x2A($sp)
    ctx->pc = 0x1ffa20u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 42), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ffa24: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ffa24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffa28: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x1ffa28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ffa2c: 0xc07fe48  jal         func_1FF920
    ctx->pc = 0x1FFA2Cu;
    SET_GPR_U32(ctx, 31, 0x1FFA34u);
    ctx->pc = 0x1FFA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFA2Cu;
            // 0x1ffa30: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF920u;
    if (runtime->hasFunction(0x1FF920u)) {
        auto targetFn = runtime->lookupFunction(0x1FF920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFA34u; }
        if (ctx->pc != 0x1FFA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoName__FP17USER_PICTURE_INFO_0x1ff920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFA34u; }
        if (ctx->pc != 0x1FFA34u) { return; }
    }
    ctx->pc = 0x1FFA34u;
label_1ffa34:
    // 0x1ffa34: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFA34u;
    {
        const bool branch_taken_0x1ffa34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFA34u;
            // 0x1ffa38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffa34) {
            ctx->pc = 0x1FFA44u;
            goto label_1ffa44;
        }
    }
    ctx->pc = 0x1FFA3Cu;
    // 0x1ffa3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FFA3Cu;
    {
        const bool branch_taken_0x1ffa3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFA3Cu;
            // 0x1ffa40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffa3c) {
            ctx->pc = 0x1FFA50u;
            goto label_1ffa50;
        }
    }
    ctx->pc = 0x1FFA44u;
label_1ffa44:
    // 0x1ffa44: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1FFA44u;
    SET_GPR_U32(ctx, 31, 0x1FFA4Cu);
    ctx->pc = 0x1FFA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFA44u;
            // 0x1ffa48: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFA4Cu; }
        if (ctx->pc != 0x1FFA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFA4Cu; }
        if (ctx->pc != 0x1FFA4Cu) { return; }
    }
    ctx->pc = 0x1FFA4Cu;
label_1ffa4c:
    // 0x1ffa4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ffa4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ffa50:
    // 0x1ffa50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ffa50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ffa54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ffa54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ffa58: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFA58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFA58u;
            // 0x1ffa5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FFA60u;
}
