#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _FUNCTION_MAP_JUMP__FP12RS_STACKDATAi
// Address: 0x269230 - 0x2692c4
void ps2__FUNCTION_MAP_JUMP__FP12RS_STACKDATAi_0x269230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__FUNCTION_MAP_JUMP__FP12RS_STACKDATAi_0x269230");
#endif

    switch (ctx->pc) {
        case 0x269280u: goto label_269280;
        case 0x2692a4u: goto label_2692a4;
        default: break;
    }

    ctx->pc = 0x269230u;

    // 0x269230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x269230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x269234: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x269234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x269238: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x269238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26923c: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x26923cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x269240: 0x24502e90  addiu       $s0, $v0, 0x2E90
    ctx->pc = 0x269240u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11920));
    // 0x269244: 0x8c422e90  lw          $v0, 0x2E90($v0)
    ctx->pc = 0x269244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11920)));
    // 0x269248: 0x3042010a  andi        $v0, $v0, 0x10A
    ctx->pc = 0x269248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)266);
    // 0x26924c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26924Cu;
    {
        const bool branch_taken_0x26924c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26924Cu;
            // 0x269250: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26924c) {
            ctx->pc = 0x26925Cu;
            goto label_26925c;
        }
    }
    ctx->pc = 0x269254u;
    // 0x269254: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x269254u;
    {
        const bool branch_taken_0x269254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269254u;
            // 0x269258: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269254) {
            ctx->pc = 0x2692B4u;
            goto label_2692b4;
        }
    }
    ctx->pc = 0x26925Cu;
label_26925c:
    // 0x26925c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x26925cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x269260: 0xac23e494  sw          $v1, -0x1B6C($at)
    ctx->pc = 0x269260u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960276), GPR_U32(ctx, 3));
    // 0x269264: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x269264u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x269268: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x269268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x26926c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x26926cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x269270: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x269270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x269274: 0xac22e4b8  sw          $v0, -0x1B48($at)
    ctx->pc = 0x269274u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960312), GPR_U32(ctx, 2));
    // 0x269278: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x269278u;
    SET_GPR_U32(ctx, 31, 0x269280u);
    ctx->pc = 0x26927Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269278u;
            // 0x26927c: 0x24a5c850  addiu       $a1, $a1, -0x37B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269280u; }
        if (ctx->pc != 0x269280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269280u; }
        if (ctx->pc != 0x269280u) { return; }
    }
    ctx->pc = 0x269280u;
label_269280:
    // 0x269280: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x269280u;
    {
        const bool branch_taken_0x269280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269280u;
            // 0x269284: 0x3c0401ed  lui         $a0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269280) {
            ctx->pc = 0x269298u;
            goto label_269298;
        }
    }
    ctx->pc = 0x269288u;
    // 0x269288: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x269288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26928c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x26928cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x269290: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x269290u;
    {
        const bool branch_taken_0x269290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269290u;
            // 0x269294: 0xac22e4fc  sw          $v0, -0x1B04($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960380), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269290) {
            ctx->pc = 0x2692B0u;
            goto label_2692b0;
        }
    }
    ctx->pc = 0x269298u;
label_269298:
    // 0x269298: 0x26050018  addiu       $a1, $s0, 0x18
    ctx->pc = 0x269298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x26929c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x26929Cu;
    SET_GPR_U32(ctx, 31, 0x2692A4u);
    ctx->pc = 0x2692A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26929Cu;
            // 0x2692a0: 0x2484e498  addiu       $a0, $a0, -0x1B68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2692A4u; }
        if (ctx->pc != 0x2692A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2692A4u; }
        if (ctx->pc != 0x2692A4u) { return; }
    }
    ctx->pc = 0x2692A4u;
label_2692a4:
    // 0x2692a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2692a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2692a8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2692a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2692ac: 0xac22e4fc  sw          $v0, -0x1B04($at)
    ctx->pc = 0x2692acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960380), GPR_U32(ctx, 2));
label_2692b0:
    // 0x2692b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2692b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2692b4:
    // 0x2692b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2692b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2692b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2692b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2692bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2692BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2692C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2692BCu;
            // 0x2692c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2692C4u;
}
