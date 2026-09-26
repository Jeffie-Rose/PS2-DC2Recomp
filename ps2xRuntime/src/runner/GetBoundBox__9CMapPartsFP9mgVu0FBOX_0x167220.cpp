#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetBoundBox__9CMapPartsFP9mgVu0FBOX
// Address: 0x167220 - 0x167280
void GetBoundBox__9CMapPartsFP9mgVu0FBOX_0x167220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetBoundBox__9CMapPartsFP9mgVu0FBOX_0x167220");
#endif

    switch (ctx->pc) {
        case 0x167250u: goto label_167250;
        case 0x167268u: goto label_167268;
        default: break;
    }

    ctx->pc = 0x167220u;

    // 0x167220: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x167220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x167224: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x167224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x167228: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x167228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16722c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16722cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x167230: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x167230u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167234: 0x8c820230  lw          $v0, 0x230($a0)
    ctx->pc = 0x167234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 560)));
    // 0x167238: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x167238u;
    {
        const bool branch_taken_0x167238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16723Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167238u;
            // 0x16723c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167238) {
            ctx->pc = 0x167248u;
            goto label_167248;
        }
    }
    ctx->pc = 0x167240u;
    // 0x167240: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x167240u;
    {
        const bool branch_taken_0x167240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167240u;
            // 0x167244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167240) {
            ctx->pc = 0x16726Cu;
            goto label_16726c;
        }
    }
    ctx->pc = 0x167248u;
label_167248:
    // 0x167248: 0xc059cc0  jal         func_167300
    ctx->pc = 0x167248u;
    SET_GPR_U32(ctx, 31, 0x167250u);
    ctx->pc = 0x16724Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167248u;
            // 0x16724c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167300u;
    if (runtime->hasFunction(0x167300u)) {
        auto targetFn = runtime->lookupFunction(0x167300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167250u; }
        if (ctx->pc != 0x167250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__9CMapPartsFPA4_f_0x167300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167250u; }
        if (ctx->pc != 0x167250u) { return; }
    }
    ctx->pc = 0x167250u;
label_167250:
    // 0x167250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167254: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x167254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x167258: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x167258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16725c: 0x26270240  addiu       $a3, $s1, 0x240
    ctx->pc = 0x16725cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 576));
    // 0x167260: 0xc04c278  jal         func_1309E0
    ctx->pc = 0x167260u;
    SET_GPR_U32(ctx, 31, 0x167268u);
    ctx->pc = 0x167264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167260u;
            // 0x167264: 0x26280250  addiu       $t0, $s1, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1309E0u;
    if (runtime->hasFunction(0x1309E0u)) {
        auto targetFn = runtime->lookupFunction(0x1309E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167268u; }
        if (ctx->pc != 0x167268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgApplyMatrix__FPfPfPA4_fPfPf_0x1309e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167268u; }
        if (ctx->pc != 0x167268u) { return; }
    }
    ctx->pc = 0x167268u;
label_167268:
    // 0x167268: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x167268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16726c:
    // 0x16726c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16726cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167270: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x167270u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167274: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167278: 0x3e00008  jr          $ra
    ctx->pc = 0x167278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16727Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167278u;
            // 0x16727c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x167280u;
}
