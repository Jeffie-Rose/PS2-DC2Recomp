#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetUkiPokeTime__FP9FISH_DATA
// Address: 0x3031e0 - 0x30328c
void GetUkiPokeTime__FP9FISH_DATA_0x3031e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetUkiPokeTime__FP9FISH_DATA_0x3031e0");
#endif

    switch (ctx->pc) {
        case 0x30322cu: goto label_30322c;
        case 0x30323cu: goto label_30323c;
        case 0x30324cu: goto label_30324c;
        case 0x30325cu: goto label_30325c;
        case 0x30326cu: goto label_30326c;
        case 0x30327cu: goto label_30327c;
        default: break;
    }

    ctx->pc = 0x3031e0u;

    // 0x3031e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3031e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3031e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3031e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3031e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3031e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3031ec: 0x8f83a000  lw          $v1, -0x6000($gp)
    ctx->pc = 0x3031ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942720)));
    // 0x3031f0: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3031F0u;
    {
        const bool branch_taken_0x3031f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3031F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3031F0u;
            // 0x3031f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3031f0) {
            ctx->pc = 0x303264u;
            goto label_303264;
        }
    }
    ctx->pc = 0x3031F8u;
    // 0x3031f8: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3031F8u;
    {
        const bool branch_taken_0x3031f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3031FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3031F8u;
            // 0x3031fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3031f8) {
            ctx->pc = 0x303244u;
            goto label_303244;
        }
    }
    ctx->pc = 0x303200u;
    // 0x303200: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x303200u;
    {
        const bool branch_taken_0x303200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x303200) {
            ctx->pc = 0x303224u;
            goto label_303224;
        }
    }
    ctx->pc = 0x303208u;
    // 0x303208: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x303208u;
    {
        const bool branch_taken_0x303208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30320Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303208u;
            // 0x30320c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303208) {
            ctx->pc = 0x303218u;
            goto label_303218;
        }
    }
    ctx->pc = 0x303210u;
    // 0x303210: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x303210u;
    {
        const bool branch_taken_0x303210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303210u;
            // 0x303214: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303210) {
            ctx->pc = 0x303280u;
            goto label_303280;
        }
    }
    ctx->pc = 0x303218u;
label_303218:
    // 0x303218: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x303218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30321c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x30321Cu;
    {
        const bool branch_taken_0x30321c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30321Cu;
            // 0x303220: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30321c) {
            ctx->pc = 0x303280u;
            goto label_303280;
        }
    }
    ctx->pc = 0x303224u;
label_303224:
    // 0x303224: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x303224u;
    SET_GPR_U32(ctx, 31, 0x30322Cu);
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30322Cu; }
        if (ctx->pc != 0x30322Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30322Cu; }
        if (ctx->pc != 0x30322Cu) { return; }
    }
    ctx->pc = 0x30322Cu;
label_30322c:
    // 0x30322c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x30322cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x303230: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x303230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x303234: 0xc0a248c  jal         func_289230
    ctx->pc = 0x303234u;
    SET_GPR_U32(ctx, 31, 0x30323Cu);
    ctx->pc = 0x303238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303234u;
            // 0x303238: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30323Cu; }
        if (ctx->pc != 0x30323Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30323Cu; }
        if (ctx->pc != 0x30323Cu) { return; }
    }
    ctx->pc = 0x30323Cu;
label_30323c:
    // 0x30323c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x30323Cu;
    {
        const bool branch_taken_0x30323c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30323Cu;
            // 0x303240: 0x24420064  addiu       $v0, $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30323c) {
            ctx->pc = 0x303280u;
            goto label_303280;
        }
    }
    ctx->pc = 0x303244u;
label_303244:
    // 0x303244: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x303244u;
    SET_GPR_U32(ctx, 31, 0x30324Cu);
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30324Cu; }
        if (ctx->pc != 0x30324Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30324Cu; }
        if (ctx->pc != 0x30324Cu) { return; }
    }
    ctx->pc = 0x30324Cu;
label_30324c:
    // 0x30324c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x30324cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x303250: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x303250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x303254: 0xc0a248c  jal         func_289230
    ctx->pc = 0x303254u;
    SET_GPR_U32(ctx, 31, 0x30325Cu);
    ctx->pc = 0x303258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303254u;
            // 0x303258: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30325Cu; }
        if (ctx->pc != 0x30325Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30325Cu; }
        if (ctx->pc != 0x30325Cu) { return; }
    }
    ctx->pc = 0x30325Cu;
label_30325c:
    // 0x30325c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30325Cu;
    {
        const bool branch_taken_0x30325c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30325Cu;
            // 0x303260: 0x24420032  addiu       $v0, $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30325c) {
            ctx->pc = 0x303280u;
            goto label_303280;
        }
    }
    ctx->pc = 0x303264u;
label_303264:
    // 0x303264: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x303264u;
    SET_GPR_U32(ctx, 31, 0x30326Cu);
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30326Cu; }
        if (ctx->pc != 0x30326Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30326Cu; }
        if (ctx->pc != 0x30326Cu) { return; }
    }
    ctx->pc = 0x30326Cu;
label_30326c:
    // 0x30326c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x30326cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x303270: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x303270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x303274: 0xc0a248c  jal         func_289230
    ctx->pc = 0x303274u;
    SET_GPR_U32(ctx, 31, 0x30327Cu);
    ctx->pc = 0x303278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x303274u;
            // 0x303278: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30327Cu; }
        if (ctx->pc != 0x30327Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30327Cu; }
        if (ctx->pc != 0x30327Cu) { return; }
    }
    ctx->pc = 0x30327Cu;
label_30327c:
    // 0x30327c: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x30327cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
label_303280:
    // 0x303280: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x303280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x303284: 0x3e00008  jr          $ra
    ctx->pc = 0x303284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303284u;
            // 0x303288: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30328Cu;
}
