#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: vpiMOTION__FP9SPI_STACKi
// Address: 0x31a200 - 0x31a264
void vpiMOTION__FP9SPI_STACKi_0x31a200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("vpiMOTION__FP9SPI_STACKi_0x31a200");
#endif

    switch (ctx->pc) {
        case 0x31a224u: goto label_31a224;
        case 0x31a240u: goto label_31a240;
        default: break;
    }

    ctx->pc = 0x31a200u;

    // 0x31a200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31a200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31a204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31a204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31a208: 0x8f82a374  lw          $v0, -0x5C8C($gp)
    ctx->pc = 0x31a208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943604)));
    // 0x31a20c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A20Cu;
    {
        const bool branch_taken_0x31a20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A20Cu;
            // 0x31a210: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a20c) {
            ctx->pc = 0x31A21Cu;
            goto label_31a21c;
        }
    }
    ctx->pc = 0x31A214u;
    // 0x31a214: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x31A214u;
    {
        const bool branch_taken_0x31a214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A214u;
            // 0x31a218: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a214) {
            ctx->pc = 0x31A25Cu;
            goto label_31a25c;
        }
    }
    ctx->pc = 0x31A21Cu;
label_31a21c:
    // 0x31a21c: 0xc05191c  jal         func_146470
    ctx->pc = 0x31A21Cu;
    SET_GPR_U32(ctx, 31, 0x31A224u);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A224u; }
        if (ctx->pc != 0x31A224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A224u; }
        if (ctx->pc != 0x31A224u) { return; }
    }
    ctx->pc = 0x31A224u;
label_31a224:
    // 0x31a224: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A224u;
    {
        const bool branch_taken_0x31a224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A224u;
            // 0x31a228: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a224) {
            ctx->pc = 0x31A234u;
            goto label_31a234;
        }
    }
    ctx->pc = 0x31A22Cu;
    // 0x31a22c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x31A22Cu;
    {
        const bool branch_taken_0x31a22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A22Cu;
            // 0x31a230: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a22c) {
            ctx->pc = 0x31A258u;
            goto label_31a258;
        }
    }
    ctx->pc = 0x31A234u;
label_31a234:
    // 0x31a234: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31a234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a238: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x31A238u;
    SET_GPR_U32(ctx, 31, 0x31A240u);
    ctx->pc = 0x31A23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A238u;
            // 0x31a23c: 0x24a52ac8  addiu       $a1, $a1, 0x2AC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A240u; }
        if (ctx->pc != 0x31A240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A240u; }
        if (ctx->pc != 0x31A240u) { return; }
    }
    ctx->pc = 0x31A240u;
label_31a240:
    // 0x31a240: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31A240u;
    {
        const bool branch_taken_0x31a240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A240u;
            // 0x31a244: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a240) {
            ctx->pc = 0x31A258u;
            goto label_31a258;
        }
    }
    ctx->pc = 0x31A248u;
    // 0x31a248: 0x8f82a374  lw          $v0, -0x5C8C($gp)
    ctx->pc = 0x31a248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943604)));
    // 0x31a24c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x31a24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31a250: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x31a250u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x31a254: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31a254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31a258:
    // 0x31a258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31a258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31a25c:
    // 0x31a25c: 0x3e00008  jr          $ra
    ctx->pc = 0x31A25Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A25Cu;
            // 0x31a260: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31A264u;
}
