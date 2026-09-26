#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetWHp__13CGameDataUsedFPi
// Address: 0x1980c0 - 0x19817c
void GetWHp__13CGameDataUsedFPi_0x1980c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetWHp__13CGameDataUsedFPi_0x1980c0");
#endif

    switch (ctx->pc) {
        case 0x19814cu: goto label_19814c;
        case 0x198158u: goto label_198158;
        case 0x198168u: goto label_198168;
        default: break;
    }

    ctx->pc = 0x1980c0u;

    // 0x1980c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1980c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1980c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1980c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1980c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1980c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1980cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1980ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1980d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1980d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1980d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1980d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1980d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1980d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1980dc: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1980DCu;
    {
        const bool branch_taken_0x1980dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1980E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1980DCu;
            // 0x1980e0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1980dc) {
            ctx->pc = 0x1980ECu;
            goto label_1980ec;
        }
    }
    ctx->pc = 0x1980E4u;
    // 0x1980e4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1980e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1980e8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1980e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1980ec:
    // 0x1980ec: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1980ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1980f0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1980f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1980f4: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1980F4u;
    {
        const bool branch_taken_0x1980f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1980F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1980F4u;
            // 0x1980f8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1980f4) {
            ctx->pc = 0x198114u;
            goto label_198114;
        }
    }
    ctx->pc = 0x1980FCu;
    // 0x1980fc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1980FCu;
    {
        const bool branch_taken_0x1980fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1980fc) {
            ctx->pc = 0x19810Cu;
            goto label_19810c;
        }
    }
    ctx->pc = 0x198104u;
    // 0x198104: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x198104u;
    {
        const bool branch_taken_0x198104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198104) {
            ctx->pc = 0x198134u;
            goto label_198134;
        }
    }
    ctx->pc = 0x19810Cu;
label_19810c:
    // 0x19810c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19810Cu;
    {
        const bool branch_taken_0x19810c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19810Cu;
            // 0x198110: 0x24900010  addiu       $s0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19810c) {
            ctx->pc = 0x198134u;
            goto label_198134;
        }
    }
    ctx->pc = 0x198114u;
label_198114:
    // 0x198114: 0x80830004  lb          $v1, 0x4($a0)
    ctx->pc = 0x198114u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x198118: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x198118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x19811c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19811Cu;
    {
        const bool branch_taken_0x19811c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x198120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19811Cu;
            // 0x198120: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19811c) {
            ctx->pc = 0x198128u;
            goto label_198128;
        }
    }
    ctx->pc = 0x198124u;
    // 0x198124: 0x24900018  addiu       $s0, $a0, 0x18
    ctx->pc = 0x198124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
label_198128:
    // 0x198128: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x198128u;
    {
        const bool branch_taken_0x198128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x198128) {
            ctx->pc = 0x198134u;
            goto label_198134;
        }
    }
    ctx->pc = 0x198130u;
    // 0x198130: 0x24900010  addiu       $s0, $a0, 0x10
    ctx->pc = 0x198130u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_198134:
    // 0x198134: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x198134u;
    {
        const bool branch_taken_0x198134 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x198134) {
            ctx->pc = 0x198168u;
            goto label_198168;
        }
    }
    ctx->pc = 0x19813Cu;
    // 0x19813c: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x19813Cu;
    {
        const bool branch_taken_0x19813c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x198140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19813Cu;
            // 0x198140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19813c) {
            ctx->pc = 0x198160u;
            goto label_198160;
        }
    }
    ctx->pc = 0x198144u;
    // 0x198144: 0xc0945c8  jal         func_251720
    ctx->pc = 0x198144u;
    SET_GPR_U32(ctx, 31, 0x19814Cu);
    ctx->pc = 0x198148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198144u;
            // 0x198148: 0xc60c0004  lwc1        $f12, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x251720u;
    if (runtime->hasFunction(0x251720u)) {
        auto targetFn = runtime->lookupFunction(0x251720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19814Cu; }
        if (ctx->pc != 0x19814Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDispVolumeForFloat__Ff_0x251720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19814Cu; }
        if (ctx->pc != 0x19814Cu) { return; }
    }
    ctx->pc = 0x19814Cu;
label_19814c:
    // 0x19814c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x19814cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x198150: 0xc0a248c  jal         func_289230
    ctx->pc = 0x198150u;
    SET_GPR_U32(ctx, 31, 0x198158u);
    ctx->pc = 0x198154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198150u;
            // 0x198154: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198158u; }
        if (ctx->pc != 0x198158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198158u; }
        if (ctx->pc != 0x198158u) { return; }
    }
    ctx->pc = 0x198158u;
label_198158:
    // 0x198158: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x198158u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x19815c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19815cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_198160:
    // 0x198160: 0xc065b30  jal         func_196CC0
    ctx->pc = 0x198160u;
    SET_GPR_U32(ctx, 31, 0x198168u);
    ctx->pc = 0x196CC0u;
    if (runtime->hasFunction(0x196CC0u)) {
        auto targetFn = runtime->lookupFunction(0x196CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198168u; }
        if (ctx->pc != 0x198168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRate__11COMMON_GAGEFv_0x196cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198168u; }
        if (ctx->pc != 0x198168u) { return; }
    }
    ctx->pc = 0x198168u;
label_198168:
    // 0x198168: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x198168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19816c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19816cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198170: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x198170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198174: 0x3e00008  jr          $ra
    ctx->pc = 0x198174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198174u;
            // 0x198178: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19817Cu;
}
