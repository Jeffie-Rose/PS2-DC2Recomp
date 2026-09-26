#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMotion__11CCharacter2Fii
// Address: 0x173930 - 0x173994
void SetMotion__11CCharacter2Fii_0x173930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMotion__11CCharacter2Fii_0x173930");
#endif

    switch (ctx->pc) {
        case 0x173950u: goto label_173950;
        default: break;
    }

    ctx->pc = 0x173930u;

    // 0x173930: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x173930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x173934: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x173934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x173938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x173938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17393c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17393cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x173940: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x173940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173944: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x173944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173948: 0xc05d290  jal         func_174A40
    ctx->pc = 0x173948u;
    SET_GPR_U32(ctx, 31, 0x173950u);
    ctx->pc = 0x17394Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173948u;
            // 0x17394c: 0x27a6003c  addiu       $a2, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174A40u;
    if (runtime->hasFunction(0x174A40u)) {
        auto targetFn = runtime->lookupFunction(0x174A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173950u; }
        if (ctx->pc != 0x173950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetKeyListIndexPtr__11CCharacter2FiPi_0x174a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173950u; }
        if (ctx->pc != 0x173950u) { return; }
    }
    ctx->pc = 0x173950u;
label_173950:
    // 0x173950: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x173950u;
    {
        const bool branch_taken_0x173950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x173950) {
            ctx->pc = 0x173980u;
            goto label_173980;
        }
    }
    ctx->pc = 0x173958u;
    // 0x173958: 0xae220368  sw          $v0, 0x368($s1)
    ctx->pc = 0x173958u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 872), GPR_U32(ctx, 2));
    // 0x17395c: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x17395cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x173960: 0xae30036c  sw          $s0, 0x36C($s1)
    ctx->pc = 0x173960u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 876), GPR_U32(ctx, 16));
    // 0x173964: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x173964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x173968: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x173968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x17396c: 0xae240370  sw          $a0, 0x370($s1)
    ctx->pc = 0x17396cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 880), GPR_U32(ctx, 4));
    // 0x173970: 0xae23050c  sw          $v1, 0x50C($s1)
    ctx->pc = 0x173970u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1292), GPR_U32(ctx, 3));
    // 0x173974: 0xae200378  sw          $zero, 0x378($s1)
    ctx->pc = 0x173974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 888), GPR_U32(ctx, 0));
    // 0x173978: 0xae2003a8  sw          $zero, 0x3A8($s1)
    ctx->pc = 0x173978u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 936), GPR_U32(ctx, 0));
    // 0x17397c: 0xae2003b8  sw          $zero, 0x3B8($s1)
    ctx->pc = 0x17397cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 952), GPR_U32(ctx, 0));
label_173980:
    // 0x173980: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x173980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173984: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x173984u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173988: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x173988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17398c: 0x3e00008  jr          $ra
    ctx->pc = 0x17398Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17398Cu;
            // 0x173990: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173994u;
}
