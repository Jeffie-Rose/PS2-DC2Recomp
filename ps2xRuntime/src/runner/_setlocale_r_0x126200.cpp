#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _setlocale_r
// Address: 0x126200 - 0x126284
void _setlocale_r_0x126200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_setlocale_r_0x126200");
#endif

    switch (ctx->pc) {
        case 0x126238u: goto label_126238;
        case 0x12624cu: goto label_12624c;
        default: break;
    }

    ctx->pc = 0x126200u;

    // 0x126200: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x126200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x126204: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x126204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x126208: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x126208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x12620c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12620cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126210: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x126210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x126214: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x126214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126218: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x126218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x12621c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x12621cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126220: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x126220u;
    {
        const bool branch_taken_0x126220 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x126224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126220u;
            // 0x126224: 0xffb30030  sd          $s3, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126220) {
            ctx->pc = 0x126260u;
            goto label_126260;
        }
    }
    ctx->pc = 0x126228u;
    // 0x126228: 0x3c130036  lui         $s3, 0x36
    ctx->pc = 0x126228u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)54 << 16));
    // 0x12622c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12622cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126230: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x126230u;
    SET_GPR_U32(ctx, 31, 0x126238u);
    ctx->pc = 0x126234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126230u;
            // 0x126234: 0x266520b0  addiu       $a1, $s3, 0x20B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126238u; }
        if (ctx->pc != 0x126238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x126238u; }
        if (ctx->pc != 0x126238u) { return; }
    }
    ctx->pc = 0x126238u;
label_126238:
    // 0x126238: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x126238u;
    {
        const bool branch_taken_0x126238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12623Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126238u;
            // 0x12623c: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126238) {
            ctx->pc = 0x126254u;
            goto label_126254;
        }
    }
    ctx->pc = 0x126240u;
    // 0x126240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x126240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126244: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x126244u;
    SET_GPR_U32(ctx, 31, 0x12624Cu);
    ctx->pc = 0x126248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x126244u;
            // 0x126248: 0x24a520a0  addiu       $a1, $a1, 0x20A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12624Cu; }
        if (ctx->pc != 0x12624Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12624Cu; }
        if (ctx->pc != 0x12624Cu) { return; }
    }
    ctx->pc = 0x12624Cu;
label_12624c:
    // 0x12624c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12624Cu;
    {
        const bool branch_taken_0x12624c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x126250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12624Cu;
            // 0x126250: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12624c) {
            ctx->pc = 0x126268u;
            goto label_126268;
        }
    }
    ctx->pc = 0x126254u;
label_126254:
    // 0x126254: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x126254u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
    // 0x126258: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x126258u;
    {
        const bool branch_taken_0x126258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12625Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126258u;
            // 0x12625c: 0xae320030  sw          $s2, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126258) {
            ctx->pc = 0x126264u;
            goto label_126264;
        }
    }
    ctx->pc = 0x126260u;
label_126260:
    // 0x126260: 0x3c130036  lui         $s3, 0x36
    ctx->pc = 0x126260u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)54 << 16));
label_126264:
    // 0x126264: 0x266220b0  addiu       $v0, $s3, 0x20B0
    ctx->pc = 0x126264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 8368));
label_126268:
    // 0x126268: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x126268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12626c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x12626cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x126270: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x126270u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126274: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x126274u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126278: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x126278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12627c: 0x3e00008  jr          $ra
    ctx->pc = 0x12627Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12627Cu;
            // 0x126280: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x126284u;
}
