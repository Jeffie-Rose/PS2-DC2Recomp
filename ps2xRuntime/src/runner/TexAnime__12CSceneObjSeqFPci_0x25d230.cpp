#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TexAnime__12CSceneObjSeqFPci
// Address: 0x25d230 - 0x25d2a8
void TexAnime__12CSceneObjSeqFPci_0x25d230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TexAnime__12CSceneObjSeqFPci_0x25d230");
#endif

    switch (ctx->pc) {
        case 0x25d250u: goto label_25d250;
        case 0x25d274u: goto label_25d274;
        case 0x25d28cu: goto label_25d28c;
        default: break;
    }

    ctx->pc = 0x25d230u;

    // 0x25d230: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25d230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25d234: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25d234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25d238: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25d238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25d23c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25d23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25d240: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25d240u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d244: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x25d244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d248: 0xc097148  jal         func_25C520
    ctx->pc = 0x25D248u;
    SET_GPR_U32(ctx, 31, 0x25D250u);
    ctx->pc = 0x25D24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D248u;
            // 0x25d24c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C520u;
    if (runtime->hasFunction(0x25C520u)) {
        auto targetFn = runtime->lookupFunction(0x25C520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D250u; }
        if (ctx->pc != 0x25D250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextAnmSeq__12CSceneObjSeqFv_0x25c520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D250u; }
        if (ctx->pc != 0x25D250u) { return; }
    }
    ctx->pc = 0x25D250u;
label_25d250:
    // 0x25d250: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25d250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d254: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x25D254u;
    {
        const bool branch_taken_0x25d254 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d254) {
            ctx->pc = 0x25D290u;
            goto label_25d290;
        }
    }
    ctx->pc = 0x25D25Cu;
    // 0x25d25c: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x25d25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x25d260: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x25D260u;
    {
        const bool branch_taken_0x25d260 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D260u;
            // 0x25d264: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d260) {
            ctx->pc = 0x25D27Cu;
            goto label_25d27c;
        }
    }
    ctx->pc = 0x25D268u;
    // 0x25d268: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25d268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d26c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x25D26Cu;
    SET_GPR_U32(ctx, 31, 0x25D274u);
    ctx->pc = 0x25D270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D26Cu;
            // 0x25d270: 0x2604002c  addiu       $a0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D274u; }
        if (ctx->pc != 0x25D274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D274u; }
        if (ctx->pc != 0x25D274u) { return; }
    }
    ctx->pc = 0x25D274u;
label_25d274:
    // 0x25d274: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25D274u;
    {
        const bool branch_taken_0x25d274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D274u;
            // 0x25d278: 0xae110020  sw          $s1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d274) {
            ctx->pc = 0x25D290u;
            goto label_25d290;
        }
    }
    ctx->pc = 0x25D27Cu;
label_25d27c:
    // 0x25d27c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x25d27cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x25d280: 0x2604002c  addiu       $a0, $s0, 0x2C
    ctx->pc = 0x25d280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x25d284: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x25D284u;
    SET_GPR_U32(ctx, 31, 0x25D28Cu);
    ctx->pc = 0x25D288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D284u;
            // 0x25d288: 0x24a5c428  addiu       $a1, $a1, -0x3BD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D28Cu; }
        if (ctx->pc != 0x25D28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D28Cu; }
        if (ctx->pc != 0x25D28Cu) { return; }
    }
    ctx->pc = 0x25D28Cu;
label_25d28c:
    // 0x25d28c: 0xae110020  sw          $s1, 0x20($s0)
    ctx->pc = 0x25d28cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
label_25d290:
    // 0x25d290: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25d290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25d294: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25d294u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d298: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25d298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d29c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25d29cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d2a0: 0x3e00008  jr          $ra
    ctx->pc = 0x25D2A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D2A0u;
            // 0x25d2a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25D2A8u;
}
