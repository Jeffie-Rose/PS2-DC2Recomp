#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsItemtypeWhoisEquip__FiPi
// Address: 0x1a11f0 - 0x1a12a0
void IsItemtypeWhoisEquip__FiPi_0x1a11f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsItemtypeWhoisEquip__FiPi_0x1a11f0");
#endif

    switch (ctx->pc) {
        case 0x1a1218u: goto label_1a1218;
        case 0x1a122cu: goto label_1a122c;
        case 0x1a123cu: goto label_1a123c;
        default: break;
    }

    ctx->pc = 0x1a11f0u;

    // 0x1a11f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a11f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a11f4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1a11f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1a11f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1a11f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1a11fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a11fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a1200: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1a1200u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1204: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a1204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a1208: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a1208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a120c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a120cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a1210: 0xc0657b0  jal         func_195EC0
    ctx->pc = 0x1A1210u;
    SET_GPR_U32(ctx, 31, 0x1A1218u);
    ctx->pc = 0x1A1214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1210u;
            // 0x1a1214: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195EC0u;
    if (runtime->hasFunction(0x195EC0u)) {
        auto targetFn = runtime->lookupFunction(0x195EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1218u; }
        if (ctx->pc != 0x1A1218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemDataType__Fi_0x195ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1218u; }
        if (ctx->pc != 0x1A1218u) { return; }
    }
    ctx->pc = 0x1A1218u;
label_1a1218:
    // 0x1a1218: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x1a1218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a121c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a121cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1220: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x1a1220u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1224: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a1224u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1228: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1a1228u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a122c:
    // 0x1a122c: 0x0  nop
    ctx->pc = 0x1a122cu;
    // NOP
    // 0x1a1230: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a1230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1234: 0xc068460  jal         func_1A1180
    ctx->pc = 0x1A1234u;
    SET_GPR_U32(ctx, 31, 0x1A123Cu);
    ctx->pc = 0x1A1238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1234u;
            // 0x1a1238: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1180u;
    if (runtime->hasFunction(0x1A1180u)) {
        auto targetFn = runtime->lookupFunction(0x1A1180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A123Cu; }
        if (ctx->pc != 0x1A123Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchEquipType__Fii_0x1a1180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A123Cu; }
        if (ctx->pc != 0x1A123Cu) { return; }
    }
    ctx->pc = 0x1A123Cu;
label_1a123c:
    // 0x1a123c: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A123Cu;
    {
        const bool branch_taken_0x1a123c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a123c) {
            ctx->pc = 0x1A1250u;
            goto label_1a1250;
        }
    }
    ctx->pc = 0x1A1244u;
    // 0x1a1244: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x1a1244u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1248: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1248u;
    {
        const bool branch_taken_0x1a1248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A124Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1248u;
            // 0x1a124c: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1248) {
            ctx->pc = 0x1A1260u;
            goto label_1a1260;
        }
    }
    ctx->pc = 0x1A1250u;
label_1a1250:
    // 0x1a1250: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1a1250u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1a1254: 0x2a820005  slti        $v0, $s4, 0x5
    ctx->pc = 0x1a1254u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1a1258: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1A1258u;
    {
        const bool branch_taken_0x1a1258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1258) {
            ctx->pc = 0x1A122Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a122c;
        }
    }
    ctx->pc = 0x1A1260u;
label_1a1260:
    // 0x1a1260: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1a1260u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1a1264: 0x2a610003  slti        $at, $s3, 0x3
    ctx->pc = 0x1a1264u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a1268: 0x1420fff0  bnez        $at, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1A1268u;
    {
        const bool branch_taken_0x1a1268 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A126Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1268u;
            // 0x1a126c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1268) {
            ctx->pc = 0x1A122Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a122c;
        }
    }
    ctx->pc = 0x1A1270u;
    // 0x1a1270: 0x12a00002  beqz        $s5, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1270u;
    {
        const bool branch_taken_0x1a1270 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1270u;
            // 0x1a1274: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1270) {
            ctx->pc = 0x1A127Cu;
            goto label_1a127c;
        }
    }
    ctx->pc = 0x1A1278u;
    // 0x1a1278: 0xaeb20000  sw          $s2, 0x0($s5)
    ctx->pc = 0x1a1278u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 18));
label_1a127c:
    // 0x1a127c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1a127cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a1280: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1a1280u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a1284: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a1284u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1288: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a1288u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a128c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a128cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1290: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a1290u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1294: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a1294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1298: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A129Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1298u;
            // 0x1a129c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A12A0u;
}
